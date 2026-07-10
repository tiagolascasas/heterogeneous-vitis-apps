#!/bin/bash
echo "sourcing qemu env script."
source /tools/Xilinx/Vitis/2024.2/data/emulation/qemu/comp/qemu/environment-setup-x86_64-petalinux-linux
unset LD_LIBRARY_PATH
echo "qemu settings done."
/tools/Xilinx/Vitis/2024.2/data/emulation/qemu/comp/qemu/sysroots/x86_64-petalinux-linux/usr/bin/qemu-img resize -f raw /home/tls/dev/heterogeneous-vitis-apps/apps/_common/package_hw_emu_zcu102/sd_card.img 8589934592
