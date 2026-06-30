import subprocess
import csv
import sys
import argparse
import os
import glob
from typing import List, Iterator, Iterable, Optional

XRT_RUN_WAIT_MAPPING_ID = "13"


def parse_arguments() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Collect execution times across varying input sizes."
    )
    parser.add_argument(
        "--mode",
        choices=["small", "large"],
        default="large",
        help="Operating mode: 'small' (2 to 1024, step 2) or 'large' (exponential to 50M).",
    )
    parser.add_argument(
        "--binary",
        type=str,
        default="./vadd.elf",
        help="Path to the target executable.",
    )
    parser.add_argument(
        "--iterations",
        type=int,
        default=10,
        help="Number of benchmark iterations per size.",
    )
    return parser.parse_args()


def generate_large_sizes(start: int = 1000, end: int = 50_000_000) -> Iterator[int]:
    current = start
    while current <= end:
        yield current
        if current < 10_000:
            current += 2000
        elif current < 100_000:
            current += 5_000
        elif current < 1_000_000:
            current += 10_000
        else:
            current += 1_000_000


def generate_small_sizes(
    start: int = 2, end: int = 1024, step: int = 2
) -> Iterator[int]:
    return iter(range(start, end + 1, step))


def get_sizes_for_mode(mode: str) -> Iterable[int]:
    if mode == "small":
        return generate_small_sizes()
    return generate_large_sizes()


def extract_kernel_time_from_trace() -> Optional[float]:
    trace_files = glob.glob("*trace*.csv") + glob.glob("xrt.csv")
    if not trace_files:
        return None

    target_trace = max(trace_files, key=os.path.getmtime)
    entry_timestamps = {}
    kernel_duration_ms = None

    try:
        with open(target_trace, mode="r") as f:
            in_events_section = False
            for line in f:
                line = line.strip()
                if not line:
                    continue
                if line == "EVENTS":
                    in_events_section = True
                    continue
                if not in_events_section:
                    continue

                parts = [p.strip() for p in line.split(",")]
                if len(parts) < 6 or parts[4] != "API_CALL":
                    continue

                event_id = parts[0]
                parent_id = parts[1]
                timestamp = float(parts[2])
                mapping_id = parts[5]

                if mapping_id == XRT_RUN_WAIT_MAPPING_ID:
                    if parent_id == "0":
                        entry_timestamps[event_id] = timestamp
                    elif parent_id in entry_timestamps:
                        start_time = entry_timestamps[parent_id]
                        kernel_duration_ms = timestamp - start_time
                        break
    except (IOError, ValueError, IndexError):
        return None
    finally:
        try:
            os.remove(target_trace)
        except OSError:
            pass

    return kernel_duration_ms


def format_metrics(
    raw_metrics: List[float], trace_kernel_ms: Optional[float]
) -> List[float]:
    # VTF resolution is in milliseconds; convert to microseconds
    trace_kernel_us = (
        (trace_kernel_ms * 1000.0) if trace_kernel_ms is not None else -1.0
    )

    # Expected layout: [DataSize, InitTime, KernelTime, EpilogueTime, TotalTime]
    if len(raw_metrics) >= 5:
        raw_metrics.insert(3, trace_kernel_us)

    return raw_metrics


def run_benchmark(binary: str, size: int) -> List[float]:
    try:
        env = os.environ.copy()
        env["XRT_PROFILE_ENABLE"] = "1"

        result = subprocess.run(
            [binary, str(size)], capture_output=True, text=True, check=True, env=env
        )
        metrics = [float(x.strip()) for x in result.stdout.strip().split(",")]

        trace_kernel_ms = extract_kernel_time_from_trace()
        return format_metrics(metrics, trace_kernel_ms)

    except (subprocess.CalledProcessError, ValueError) as e:
        print(f"Error running size {size}: {e}", file=sys.stderr)
        return []


def write_csv_headers(writer: csv.writer) -> None:
    headers = [
        "Iteration",
        "DataSize",
        "InitTime",
        "KernelTime",
        "TraceKernelTime",
        "EpilogueTime",
        "TotalTime",
    ]
    writer.writerow(headers)


def collect_metrics(
    binary: str, sizes: Iterable[int], output_file: str, iterations: int
) -> None:
    with open(output_file, mode="w", newline="") as f:
        writer = csv.writer(f)
        write_csv_headers(writer)

        for size in sizes:
            print(f"Benchmarking size: {size}...", flush=True)
            for i in range(iterations):
                metrics = run_benchmark(binary, size)
                if metrics:
                    writer.writerow([i] + metrics)


def main() -> None:
    args = parse_arguments()
    sizes = get_sizes_for_mode(args.mode)
    output_file = f"benchmark_results_{args.mode}.csv"

    collect_metrics(args.binary, sizes, output_file, args.iterations)


if __name__ == "__main__":
    main()
