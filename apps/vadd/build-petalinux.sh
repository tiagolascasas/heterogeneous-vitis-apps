#!/bin/bash
# ==============================================================================
# PetaLinux 2024.2 Automated Build Script for ZCU102 (Original + WIC Output)
# Includes: Bash, Networking, GCC/Make, DNF, XRT, manual zocl injection, 
#           and automated SD Card Image generation.
# ==============================================================================

# Exit immediately if a command exits with a non-zero status
set -e

# --- Configuration ---
PROJECT_NAME="zcu102_full_os_wic"
# CHANGE THIS TO YOUR ACTUAL BSP PATH
BSP_PATH="/home/tls/xilinx/bsp/xilinx-zcu102-v2024.2-11110212.bsp"

if [ ! -f "$BSP_PATH" ]; then
    echo "Error: BSP not found at $BSP_PATH. Please update the BSP_PATH variable."
    exit 1
fi

echo "========================================================"
echo " 1. Creating PetaLinux Project from BSP..."
echo "========================================================"
petalinux-create -t project -s "$BSP_PATH" -n "$PROJECT_NAME"
cd "$PROJECT_NAME"

echo "========================================================"
echo " 2. Injecting Packages into RootFS Configuration..."
echo "========================================================"
ROOTFS_USER_CONF="project-spec/meta-user/conf/user-rootfsconfig"
ROOTFS_SYS_CONF="project-spec/configs/rootfs_config"

# Register the packages in the user menu config
cat <<EOF >> "$ROOTFS_USER_CONF"
CONFIG_bash
CONFIG_bash-completion
CONFIG_packagegroup-core-buildessential
CONFIG_dnf
CONFIG_xrt
CONFIG_xrt-dev
CONFIG_zocl
CONFIG_opencl-headers
CONFIG_ocl-icd
CONFIG_ocl-icd-dev
CONFIG_openssh
CONFIG_openssh-sftp-server
CONFIG_net-tools
CONFIG_iproute2
CONFIG_util-linux
EOF

# Hard-enable the packages to bypass the interactive menu
PACKAGES=(
    "bash" "bash-completion" "packagegroup-core-buildessential" "dnf" 
    "xrt" "xrt-dev" "zocl" "opencl-headers" "ocl-icd" "ocl-icd-dev" 
    "openssh" "openssh-sftp-server" "net-tools" "iproute2" "util-linux"
)

for pkg in "${PACKAGES[@]}"; do
    echo "CONFIG_${pkg}=y" >> "$ROOTFS_SYS_CONF"
done

# Apply configurations silently
petalinux-config -c rootfs --silentconfig

echo "========================================================"
echo " 3. Appending 'zocl' node to Device Tree (Required for XRT)"
echo "========================================================"
DTSI_FILE="project-spec/meta-user/recipes-bsp/device-tree/files/system-user.dtsi"

cat <<EOF >> "$DTSI_FILE"

&amba {
    zyxclmm_drm {
        compatible = "xlnx,zocl";
        status = "okay";
    };
};
EOF

echo "========================================================"
echo " 4. Building the OS (This will take a while)..."
echo "========================================================"
petalinux-build

echo "========================================================"
echo " 5. Packaging BOOT.BIN..."
echo "========================================================"
# Package the ZynqMP boot file components
# Note: If your BSP lacks a default bitstream, remove the '--fpga' flag below.
petalinux-package --boot \
    --fsbl images/linux/zynqmp_fsbl.elf \
    --u-boot images/linux/u-boot.elf \
    --pmufw images/linux/pmufw.elf \
    --fpga images/linux/system.bit \
    --force

echo "========================================================"
echo " 6. Generating Flashable SD Card Image (.wic)..."
echo "========================================================"
# This takes the boot files and the rootfs and packs them into a raw disk image
petalinux-package --wic \
    --bootfiles "BOOT.BIN,boot.scr,Image,system.dtb" \
    --rootfs-file images/linux/rootfs.ext4

echo "========================================================"
echo " SUCCESS! Project built successfully."
echo " -> Burn this file to your SD Card: $PROJECT_NAME/images/linux/petalinux-sdimage.wic"
echo "========================================================"