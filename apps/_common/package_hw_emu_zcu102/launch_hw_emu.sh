#!/bin/bash -f
cd /home/tls/dev/heterogeneous-vitis-apps/apps/_common/package_hw_emu_zcu102
launch_emulator  -device-family ultrascale \
-qemu-dtb $PWD/sim/behav_waveform/xsim/zcu102-arm.cosim.dtb \
-pmc-dtb $PWD/sim/behav_waveform/xsim/zynqmp-pmu.dtb \
-target hw_emu \
-qemu-args-file $PWD/qemu_args.txt \
-pmc-args-file $PWD/pmu_args.txt \
-sd-card-image $PWD/sd_card.img \
-pl-sim-dir $PWD/sim/behav_waveform/xsim \
-xtlm-log-state WAVEFORM_AND_LOG \
-platform-name xilinx_zcu102_base_202420_1 \
-forward-port 1440 22 \
 "$@"
