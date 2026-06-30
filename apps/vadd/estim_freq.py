import pandas as pd
from scipy.stats import linregress
from typing import Tuple


def load_clean_data(filepath: str) -> pd.DataFrame:
    """Loads benchmark data and averages iterations per size."""
    df = pd.read_csv(filepath)
    return df.groupby("DataSize").mean().reset_index()


def calculate_frequencies(df: pd.DataFrame) -> Tuple[float, float]:
    """Calculates FPGA frequency using both point-by-point and regression methods.

    Assumes KernelTime is in microseconds.
    """
    sizes = df["DataSize"].values
    times = df["TraceKernelTime"].values

    # Method 1: Point-by-point algebraic estimation using the exact cycle formula
    # f = (148 + N) / T
    point_frequencies = (148 + sizes) / times
    avg_point_freq_mhz = float(point_frequencies.mean())

    # Method 2: Linear regression slope estimation
    # T = m*N + b -> m = d(Time)/d(N) = 1 / f
    slope, _, _, _, _ = linregress(sizes, times)
    regression_freq_mhz = 1.0 / slope

    return avg_point_freq_mhz, regression_freq_mhz


if __name__ == "__main__":
    CSV_FILE = "benchmark_results_large.csv"
    try:
        df_averaged = load_clean_data(CSV_FILE)
        f_point, f_track = calculate_frequencies(df_averaged)

        print(f"FPGA Frequency (Exact Formula Mean): {f_point:.2f} MHz")
        print(f"FPGA Frequency (Regression Slope):    {f_track:.2f} MHz")
    except FileNotFoundError:
        print(f"Error: {CSV_FILE} not found.")
