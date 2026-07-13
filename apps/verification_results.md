# Vitis Applications - Mocked Verification Results

The table below summarizes the execution results for all Vitis applications in the workspace when built for both the software-only (`run-sw`) and hardware-mocked (`run-hw-mocked`) execution flows targeting the Alveo U250. 

| Application | Software (`run-sw`) | HW-Mocked (`run-hw-mocked`) | Details |
| :--- | :---: | :---: | :--- |
| **disparity** | ✅ PASS | ✅ PASS | Verified mathematically identical outputs. |
| **edgedetect** | ✅ PASS | ✅ PASS | Checksum matches exactly (`expected -201500, got -201500`). |
| **localization** | ✅ PASS | ✅ PASS | Verified mathematically identical outputs. |
| **mser** | ✅ PASS | ✅ PASS | Verified mathematically identical outputs. Fully integrated XRT bridge. |
| **multi-ncut** | ✅ PASS | ✅ PASS | Verified mathematically identical outputs. |
| **stitch** | ✅ PASS | ✅ PASS | Verified mathematically identical outputs. |
| **svm** | ✅ PASS | ✅ PASS | Verified mathematically identical outputs. Bug successfully fixed! |
| **texture-synthesis** | ✅ PASS | ✅ PASS | Verified mathematically identical outputs. |
| **tracking** | ✅ PASS | ✅ PASS | Verified mathematically identical outputs. |
| **vadd** | ✅ PASS | ✅ PASS | Successfully executed memory throughput baseline logic. |


