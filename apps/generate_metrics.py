import os
import re
import csv
from glob import glob

def parse_metrics():
    apps_dir = "/home/tls/dev/heterogeneous-vitis-apps/apps"
    backup_dirs = glob(f"{apps_dir}/*/backups/vitis_*")
    
    # Headers
    headers = [
        "Timestamp", "Application", "Target Freq (MHz)", "Achieved Freq (MHz)", 
        "Min Latency (cycles)", "Max Latency (cycles)", "Avg Latency (cycles)", 
        "Compile Time", "HLS FF", "HLS LUT", "HLS BRAM", "HLS DSP", 
        "Impl FF", "Impl LUT", "Impl BRAM", "Impl DSP"
    ]
    
    results = []
    
    for backup_dir in backup_dirs:
        # e.g. apps/mser/backups/vitis_20260714_072254
        parts = backup_dir.split('/')
        app_name = parts[-3]
        timestamp = parts[-1].replace("vitis_", "")
        
        # 1. Compile Time and Target Freq
        build_log = os.path.join(os.path.dirname(backup_dir), f"build_log_{timestamp}.txt")
        compile_time = "N/A"
        target_freq = "N/A"
        if os.path.exists(build_log):
            with open(build_log, 'r') as f:
                content = f.read()
                matches = re.findall(r"Total elapsed time: (.*)", content)
                if matches:
                    time_matches = [m.strip() for m in matches if 'memory:' not in m]
                    if time_matches:
                        compile_time = time_matches[-1]
                match = re.search(r"Applying ini 'clock=(\d+)MHz'", content)
                if match:
                    target_freq = match.group(1).strip()
        
        # 2. HLS Latency and Resource Estimates
        hls_rpt = glob(f"{backup_dir}/hls/hls/syn/report/*_csynth.rpt")
        min_lat, max_lat, avg_lat = "N/A", "N/A", "N/A"
        hls_ff, hls_lut, hls_bram, hls_dsp = "N/A", "N/A", "N/A", "N/A"
        
        if hls_rpt:
            # Usually we want the main one without 'Pipeline' or 'Outline'
            main_rpt = None
            for r in hls_rpt:
                if "Pipeline" not in r and "Outline" not in r:
                    main_rpt = r
                    break
            if not main_rpt:
                main_rpt = hls_rpt[0]

            with open(main_rpt, 'r') as f:
                content = f.read()
                
                # Latency
                # +---------+-------------+----------+-------------+------+-------------+---------+
                # |     2207|  76207143775|  7.356 us|  253.998 sec|  2208|  76207143776|       no|
                # match the first row with values inside the Latency summary block
                match_lat = re.search(r"\|\s*(\d+)\|\s*(\d+)\|.*?\|.*?\|.*?\|.*?\|.*?\|", content)
                if match_lat:
                    min_lat = match_lat.group(1)
                    max_lat = match_lat.group(2)
                
                # Resources
                # |Total                |       50|      3|    42343|    53130|     0|
                match_res = re.search(r"\|Total\s*\|\s*(\d+|~0)\|\s*(\d+|~0)\|\s*(\d+|~0)\|\s*(\d+|~0)\|\s*(\d+|~0)\|", content)
                if match_res:
                    hls_bram = match_res.group(1).replace("~", "")
                    hls_dsp = match_res.group(2).replace("~", "")
                    hls_ff = match_res.group(3).replace("~", "")
                    hls_lut = match_res.group(4).replace("~", "")
        
        # 3. Impl Resources
        impl_rpt = glob(f"{backup_dir}/link_hw/reports/*/imp/impl_1_kernel_util_routed.rpt")
        if not impl_rpt:
            impl_rpt = glob(f"{backup_dir}/link_hw/reports/*/imp/impl_1_full_util_routed.rpt")
            
        impl_ff, impl_lut, impl_bram, impl_dsp = "N/A", "N/A", "N/A", "N/A"
        if impl_rpt:
            with open(impl_rpt[0], 'r') as f:
                content = f.read()
                for line in content.split('\n'):
                    if "|    Used Resources   |" in line:
                        vals = line.split('|')
                        if len(vals) > 7:
                            impl_lut = vals[2].split('[')[0].strip()
                            impl_ff = vals[4].split('[')[0].strip()
                            impl_bram = vals[5].split('[')[0].strip()
                            impl_dsp = vals[7].split('[')[0].strip()
                            break

        # 4. Achieved Frequency
        timing_rpt = glob(f"{backup_dir}/link_hw/reports/*/imp/impl_1_hw_bb_locked_timing_summary_routed.rpt")
        if not timing_rpt:
            timing_rpt = glob(f"{backup_dir}/link_hw/reports/*/imp/*_timing_summary_routed.rpt")
            
        achieved_freq = "N/A"
        if timing_rpt and target_freq != "N/A":
            with open(timing_rpt[0], 'r') as f:
                content = f.read()
                match = re.search(r"WNS\(ns\).*?\n\s*-+\s*.*?\n\s*(-?\d+\.\d+)", content)
                if match:
                    wns = float(match.group(1))
                    target_period = 1000.0 / float(target_freq)
                    if wns >= 0:
                        achieved_freq = target_freq
                    else:
                        actual_period = target_period - wns
                        achieved_freq = f"{1000.0 / actual_period:.2f}"

        results.append([
            timestamp, app_name, target_freq, achieved_freq, 
            min_lat, max_lat, avg_lat, compile_time, 
            hls_ff, hls_lut, hls_bram, hls_dsp, 
            impl_ff, impl_lut, impl_bram, impl_dsp
        ])
        
    # Write CSV
    with open(f"{apps_dir}/vitis_build_metrics.csv", 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(headers)
        results.sort(key=lambda x: x[0], reverse=True)
        writer.writerows(results)
    
    print(f"Generated {apps_dir}/vitis_build_metrics.csv with {len(results)} records.")

if __name__ == '__main__':
    parse_metrics()
