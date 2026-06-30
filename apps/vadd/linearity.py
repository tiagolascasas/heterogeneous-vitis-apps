import pandas as pd
import numpy as np
from scipy.stats import linregress
from typing import Dict, Any


def load_and_average_data(filepath: str) -> pd.DataFrame:
    """Loads the benchmark CSV and averages the iterations for each DataSize."""
    df = pd.read_csv(filepath)
    # Group by DataSize to compute the mean across the 10 iterations per size
    df_mean = df.groupby("DataSize").mean().reset_index()
    return df_mean


def analyze_metric_linearity(df: pd.DataFrame, metric: str) -> Dict[str, Any]:
    """Calculates linear R^2 and log-log scaling factor to determine linearity."""
    x = df["DataSize"].values
    y = df[metric].values

    # Avoid log(0) issues if any initialization metric is exactly zero
    valid_mask = (x > 0) & (y > 0)
    x_val, y_val = x[valid_mask], y[valid_mask]

    # Standard Linear Regression
    slope, intercept, r_value, p_value, std_err = linregress(x_val, y_val)
    r_squared = r_value**2

    # Log-Log Regression to find the scaling exponent (power law)
    log_x = np.log10(x_val)
    log_y = np.log10(y_val)
    log_slope, _, log_r, _, _ = linregress(log_x, log_y)
    log_r_squared = log_r**2

    return {
        "r_squared": r_squared,
        "scaling_exponent": log_slope,
        "log_r_squared": log_r_squared,
    }


def report_linearity(filepath: str) -> None:
    """Generates a text report assessing linearity for each time measure."""
    df = load_and_average_data(filepath)
    metrics = ["InitTime", "KernelTime", "EpilogueTime", "TotalTime"]

    print(
        f"{'Metric':<15} | {'Linear R^2':<10} | {'Log-Log Slope (k)':<18} | {'Assessment'}"
    )
    print("-" * 70)

    for metric in metrics:
        res = analyze_metric_linearity(df, metric)
        r2 = res["r_squared"]
        k = res["scaling_exponent"]

        # Assess based on R^2 and the scaling exponent k (where N^k is the trend)
        if r2 > 0.99 and 0.95 <= k <= 1.05:
            assessment = "Strictly Linear"
        elif 0.95 <= k <= 1.05:
            assessment = "Linear (High variance/noise)"
        elif k > 1.05:
            assessment = f"Super-linear (O(N^{k:.2f}) - Potential Bottleneck)"
        elif k < 0.95:
            assessment = f"Sub-linear (O(N^{k:.2f}) - Fixed Overhead Dominated)"
        else:
            assessment = "Non-linear"

        print(f"{metric:<15} | {r2:<10.4f} | {k:<18.2f} | {assessment}")


if __name__ == "__main__":
    CSV_FILE = "benchmark_results.csv"
    try:
        report_linearity(CSV_FILE)
    except FileNotFoundError:
        print(f"Error: {CSV_FILE} not found. Run the benchmark script first.")
