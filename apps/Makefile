# ── System-dependent flags ────────────────────────────────────────────────────
HOST_CXX ?= /tools/Xilinx/Vitis/2024.2/gnu/aarch64/lin/aarch64-linux/bin/aarch64-linux-gnu-g++
SYSROOT ?= /home/tls/xilinx/sysroots/xilinx-zynqmp-common-v2024.2/sysroots/cortexa72-cortexa53-xilinx-linux

# ── Platform ──────────────────────────────────────────────────────────────────
PLATFORM ?= xilinx_zcu102_base_202420_1

# Common image for hw_emu packaging (rootfs + kernel).
# Download from AMD/Xilinx downloads page: "ZCU102 Common Image 2024.2"
COMMON_IMAGE_DIR ?= /home/tls/xilinx/sysroots/xilinx-zynqmp-common-v2024.2
ROOTFS           ?= $(COMMON_IMAGE_DIR)/rootfs.ext4
KERNEL_IMAGE     ?= $(COMMON_IMAGE_DIR)/Image

# ── App-specific variables ────────────────────────────────────────────────────
APPNAME ?= app
TOP     ?= cluster
RUNTIME ?= xrt
HOST_SRCS ?= $(wildcard *.cpp)
BRIDGE_SRCS ?=
HOST_SUFFIX ?=
HOST_VARIANTS ?=
BUILD_DIR ?= build
VITIS_DIR ?= vitis
ELF_PATH ?= $(BUILD_DIR)/$(APPNAME)$(HOST_SUFFIX).elf
XO_PATH ?= $(BUILD_DIR)/$(TOP).xo
HW_XCLBIN ?= $(BUILD_DIR)/cluster.xclbin
HW_EMU_XCLBIN ?= $(BUILD_DIR)/cluster_hw_emu.xclbin
# Shared across all apps on the same platform: rootfs + kernel are identical.
# Placed in apps/ so it lives next to this Makefile, not inside any app subdir.
SHARED_EMU_DIR ?= $(dir $(abspath $(lastword $(MAKEFILE_LIST))))package_hw_emu_$(PLATFORM)
# Supply any hw_emu xclbin to 'setup-hwemu' to build the full QEMU base image.
SEED_XCLBIN    ?=

# ── Compilation flags ─────────────────────────────────────────────────────────
CXXFLAGS        += -std=c++17 -Wall -O3 --sysroot=$(SYSROOT)
RUNTIME_CXXFLAGS = $(if $(filter opencl,$(RUNTIME)),-DUSE_OPENCL,\
                   $(if $(filter axi,$(RUNTIME)),-DUSE_AXI,))
RUNTIME_INCLUDES = $(if $(filter opencl,$(RUNTIME)),-I$(SYSROOT)/usr/include,\
                   $(if $(filter axi,$(RUNTIME)),,-I$(SYSROOT)/usr/include/xrt))
RUNTIME_LIBS     = $(if $(filter opencl,$(RUNTIME)),-L$(SYSROOT)/usr/lib -lOpenCL -lpthread,\
                   $(if $(filter axi,$(RUNTIME)),-L$(SYSROOT)/usr/lib -lpthread,\
                   -L$(SYSROOT)/usr/lib -lxrt_coreutil -lpthread))

HOST_CXXFLAGS ?= $(CXXFLAGS) $(RUNTIME_CXXFLAGS)
HOST_INCLUDES ?= $(RUNTIME_INCLUDES)
HOST_LIBS ?= $(RUNTIME_LIBS)

.DEFAULT_GOAL := host

dirs:
	mkdir -p $(BUILD_DIR) $(VITIS_DIR)

capture_xo: | dirs
	@if [ -f "$(TOP).xo" ]; then \
		cp -f "$(TOP).xo" "$(XO_PATH)"; \
	elif [ -f "$(VITIS_DIR)/hls/$(TOP).xo" ]; then \
		cp -f "$(VITIS_DIR)/hls/$(TOP).xo" "$(XO_PATH)"; \
	else \
		xo_path="$$(find "$(VITIS_DIR)" -type f -name "$(TOP).xo" | head -n 1)"; \
		if [ -n "$$xo_path" ]; then \
			cp -f "$$xo_path" "$(XO_PATH)"; \
		else \
			echo "ERROR: $(TOP).xo not found after synthesis."; \
			exit 1; \
		fi; \
	fi

.PHONY: update_cfg synthesis impl

# ── Helpers ───────────────────────────────────────────────────────────────────
update_cfg:
	@echo "Checking top function in hls_config.cfg"
	@grep -q "^syn.top=$(TOP)$$" hls_config.cfg || sed -i "s/^syn.top=.*/syn.top=$(TOP)/" hls_config.cfg


# ── Host build ────────────────────────────────────────────────────────────────
$(ELF_PATH): $(HOST_SRCS) $(BRIDGE_SRCS) | dirs
	$(HOST_CXX) $(HOST_CXXFLAGS) $(HOST_SRCS) $(BRIDGE_SRCS) $(HOST_INCLUDES) $(HOST_LIBS) -o $(ELF_PATH)

build-host: $(ELF_PATH)

ifeq ($(strip $(HOST_VARIANTS)),)
host: build-host
else
host: | dirs
	@set -e; \
	for variant in $(HOST_VARIANTS); do \
		echo "Building host variant: $$variant"; \
		$(MAKE) --no-print-directory host-$$variant; \
	done
endif

host-opencl: RUNTIME = opencl
host-opencl: HOST_SUFFIX = -opencl
host-opencl: BRIDGE_SRCS = cluster_bridge_opencl.cpp
host-opencl: $(ELF_PATH)

host-xrt: RUNTIME = xrt
host-xrt: HOST_SUFFIX = -xrt
host-xrt: BRIDGE_SRCS = cluster_bridge_xrt.cpp
host-xrt: $(ELF_PATH)

host-axi: RUNTIME = axi
host-axi: HOST_SUFFIX = -axi
host-axi: BRIDGE_SRCS = cluster_bridge_axi.cpp
host-axi: $(ELF_PATH)

# ── Kernel ────────────────────────────────────────────────────────────────────
$(VITIS_DIR)/hls/hls_status: hls_config.cfg | update_cfg dirs
	v++ --compile --mode hls --config hls_config.cfg --work_dir $(VITIS_DIR)/hls
	mkdir -p $(dir $@) && touch $@

synthesis: $(VITIS_DIR)/hls/hls_status

$(XO_PATH): $(VITIS_DIR)/hls/hls_status
	vitis-run --mode hls --impl --config hls_config.cfg --work_dir $(VITIS_DIR)/hls
	$(MAKE) capture_xo

impl: $(XO_PATH)

# ── HW link (board) ───────────────────────────────────────────────────────────
$(HW_XCLBIN): $(XO_PATH) | dirs
	v++ -l -t hw \
	    --platform $(PLATFORM) \
	    --temp_dir $(VITIS_DIR)/link_hw/temp \
	    --log_dir $(VITIS_DIR)/link_hw/logs \
	    --report_dir $(VITIS_DIR)/link_hw/reports \
	    --config cluster-link.cfg \
	    $(XO_PATH) \
	    -o $(HW_XCLBIN)

link-hw: $(HW_XCLBIN)

# ── HW emulation ─────────────────────────────────────────────────────────────
# Step 1 – link: produces the hw_emu xclbin.
# Vivado xsim 2024.2 generates C code using old-style empty-argument function
# declarations (void foo()) that C23 (GCC 15 default) treats as "no arguments",
# causing incompatible-pointer-type errors when passed as callbacks.  A local
# gcc wrapper prepended to PATH forces -std=gnu17 only for xelab's internal C
# compilation; the host ELF build is unaffected because it uses HOST_CXX.
GCC_WRAP_DIR := $(CURDIR)/$(BUILD_DIR)/gcc-wrap

$(GCC_WRAP_DIR)/gcc: | dirs
	mkdir -p $(GCC_WRAP_DIR)
	printf '#!/bin/bash\nif [[ "$$0" == *"++" ]]; then\n  COMP="/usr/bin/x86_64-linux-gnu-g++-15"\n  FLAGS=""\nelse\n  COMP="/usr/bin/x86_64-linux-gnu-gcc-15"\n  FLAGS="-std=gnu17"\nfi\nexec "$$COMP" $$FLAGS -Wno-error=incompatible-pointer-types -Wno-error=implicit-function-declaration -Wno-error=implicit-int -Wno-error=int-conversion "$$@"\n' > $@
	chmod +x $@
	ln -sf gcc $(GCC_WRAP_DIR)/cc
	ln -sf gcc $(GCC_WRAP_DIR)/g++
	ln -sf gcc $(GCC_WRAP_DIR)/c++
	printf '#define _GNU_SOURCE\n#include <dlfcn.h>\n#include <string.h>\n#include <unistd.h>\n#include <stdlib.h>\n#include <spawn.h>\ntypedef int (*execve_func_t)(const char *pathname, char *const argv[], char *const envp[]);\ntypedef int (*execv_func_t)(const char *pathname, char *const argv[]);\ntypedef int (*execvp_func_t)(const char *file, char *const argv[]);\ntypedef int (*posix_spawn_func_t)(pid_t *pid, const char *path, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[]);\ntypedef int (*posix_spawnp_func_t)(pid_t *pid, const char *file, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[]);\nstatic const char* check_wrap(const char* path) {\n    if (!path) return path;\n    if (strcmp(path, "/usr/bin/gcc") == 0 || strcmp(path, "gcc") == 0 || strcmp(path, "cc") == 0 || strcmp(path, "/usr/bin/cc") == 0) {\n        const char* wrap = getenv("GCC_WRAP_SCRIPT");\n        if (wrap) return wrap;\n    }\n    if (strcmp(path, "/usr/bin/g++") == 0 || strcmp(path, "g++") == 0 || strcmp(path, "c++") == 0 || strcmp(path, "/usr/bin/c++") == 0) {\n        const char* wrap = getenv("CXX_WRAP_SCRIPT");\n        if (wrap) return wrap;\n    }\n    return path;\n}\nint execve(const char *pathname, char *const argv[], char *const envp[]) {\n    execve_func_t old_execve = (execve_func_t)dlsym(RTLD_NEXT, "execve");\n    return old_execve(check_wrap(pathname), argv, envp);\n}\nint execv(const char *pathname, char *const argv[]) {\n    execv_func_t old_execv = (execv_func_t)dlsym(RTLD_NEXT, "execv");\n    return old_execv(check_wrap(pathname), argv);\n}\nint execvp(const char *file, char *const argv[]) {\n    execvp_func_t old_execvp = (execvp_func_t)dlsym(RTLD_NEXT, "execvp");\n    return old_execvp(check_wrap(file), argv);\n}\nint posix_spawn(pid_t *pid, const char *path, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[]) {\n    posix_spawn_func_t old_posix_spawn = (posix_spawn_func_t)dlsym(RTLD_NEXT, "posix_spawn");\n    return old_posix_spawn(pid, check_wrap(path), file_actions, attrp, argv, envp);\n}\nint posix_spawnp(pid_t *pid, const char *file, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[]) {\n    posix_spawnp_func_t old_posix_spawnp = (posix_spawnp_func_t)dlsym(RTLD_NEXT, "posix_spawnp");\n    return old_posix_spawnp(pid, check_wrap(file), file_actions, attrp, argv, envp);\n}\n' > $(GCC_WRAP_DIR)/intercept.c
	gcc -shared -fPIC -O2 $(GCC_WRAP_DIR)/intercept.c -o $(GCC_WRAP_DIR)/intercept.so -ldl

$(HW_EMU_XCLBIN): $(XO_PATH) $(GCC_WRAP_DIR)/gcc | dirs
	PATH="$(GCC_WRAP_DIR):$$PATH" LD_PRELOAD="$(GCC_WRAP_DIR)/intercept.so" GCC_WRAP_SCRIPT="$(GCC_WRAP_DIR)/gcc" CXX_WRAP_SCRIPT="$(GCC_WRAP_DIR)/g++" v++ -l -t hw_emu \
	    --platform $(PLATFORM) \
	    --temp_dir $(VITIS_DIR)/link_hwemu/temp \
	    --log_dir $(VITIS_DIR)/link_hwemu/logs \
	    --report_dir $(VITIS_DIR)/link_hwemu/reports \
	    --config cluster-link.cfg \
	    $(XO_PATH) \
	    -o $(HW_EMU_XCLBIN)

link-hwemu: $(HW_EMU_XCLBIN)

# Step 2 – emconfig: XRT reads this at runtime to select the hw_emu path.
# Stored in SHARED_EMU_DIR because it is platform-specific, not app-specific.
$(SHARED_EMU_DIR):
	mkdir -p $@

$(SHARED_EMU_DIR)/emconfig.json: | $(SHARED_EMU_DIR)
	emconfigutil --platform $(PLATFORM) --od $(SHARED_EMU_DIR)

emconfig: $(SHARED_EMU_DIR)/emconfig.json

# setup-hwemu: build the shared QEMU base image once for the current platform.
# v++ -p requires an hw_emu xclbin to configure the PL simulation; this target
# auto-discovers any cluster_hw_emu.xclbin already built under apps/ so you
# don't have to specify one.  Override with SEED_XCLBIN= if needed.
# Prerequisite: at least one app linked for hw_emu (make link-hwemu).
.PHONY: setup-hwemu
setup-hwemu: $(SHARED_EMU_DIR)/emconfig.json
	@if [ -f "$(SHARED_EMU_DIR)/launch_hw_emu.sh" ]; then \
		echo "QEMU base image already present at $(SHARED_EMU_DIR)"; \
	else \
		seed="$(SEED_XCLBIN)"; \
		if [ -z "$$seed" ]; then \
			seed=$$(find "$(dir $(abspath $(lastword $(MAKEFILE_LIST))))" \
			             -maxdepth 4 -name "cluster_hw_emu.xclbin" 2>/dev/null | head -1); \
		fi; \
		[ -n "$$seed" ] || { \
			echo "ERROR: no hw_emu xclbin found under apps/."; \
			echo "  Build any app for hw_emu first:  make link-hwemu"; \
			echo "  Or provide one explicitly:       make setup-hwemu SEED_XCLBIN=<path>"; \
			exit 1; \
		}; \
		echo "Building QEMU base image from $$seed ..."; \
		touch "$(SHARED_EMU_DIR)/placeholder.elf"; \
		v++ -p -t hw_emu \
		    --platform $(PLATFORM) \
		    --package.out_dir     $(SHARED_EMU_DIR) \
		    --package.rootfs      $(ROOTFS) \
		    --package.kernel_image $(KERNEL_IMAGE) \
		    --package.sd_file     $$seed \
		    --package.sd_file     $(SHARED_EMU_DIR)/placeholder.elf \
		    --package.sd_file     $(SHARED_EMU_DIR)/emconfig.json \
		    $$seed; \
	fi

# Step 3 – package: assembles rootfs + kernel + ELF + xclbin into a QEMU image
#           and writes launch_hw_emu.sh into SHARED_EMU_DIR (once per platform).
#           Subsequent apps skip v++ -p and use inject-hwemu to swap only the
#           app-specific xclbin and ELF inside the shared FAT image via mcopy.
#           Run the emulator with: make run-hwemu
$(SHARED_EMU_DIR)/launch_hw_emu.sh: $(HW_EMU_XCLBIN) host $(SHARED_EMU_DIR)/emconfig.json
	mkdir -p $(BUILD_DIR)/hw_emu_pkg
	cp $(HW_EMU_XCLBIN) $(BUILD_DIR)/hw_emu_pkg/cluster.xclbin
	cp $(BUILD_DIR)/$(APPNAME)-xrt.elf $(BUILD_DIR)/hw_emu_pkg/$(APPNAME).elf
	v++ -p -t hw_emu \
	    --platform $(PLATFORM) \
	    --package.out_dir     $(SHARED_EMU_DIR) \
	    --package.rootfs      $(ROOTFS) \
	    --package.kernel_image $(KERNEL_IMAGE) \
	    --package.sd_file     $(BUILD_DIR)/hw_emu_pkg/cluster.xclbin \
	    --package.sd_file     $(BUILD_DIR)/hw_emu_pkg/$(APPNAME).elf \
	    --package.sd_file     $(SHARED_EMU_DIR)/emconfig.json \
	    $(BUILD_DIR)/hw_emu_pkg/cluster.xclbin

# Inject only the app-specific files into the shared FAT image.
# Fast: mcopy replaces a few MB without touching the large rootfs.
# emconfig.json is not re-injected: it is platform-specific, never changes.
.PHONY: inject-hwemu
inject-hwemu: $(HW_EMU_XCLBIN) host
	@sd_img=$$(find "$(SHARED_EMU_DIR)" -maxdepth 1 -name "*.img" 2>/dev/null | head -1); \
	[ -n "$$sd_img" ] || { echo "ERROR: no .img found in $(SHARED_EMU_DIR)"; exit 1; }; \
	echo "Injecting app files into $$sd_img ..."; \
	mcopy -i "$$sd_img" -o $(HW_EMU_XCLBIN) ::/cluster.xclbin; \
	mcopy -i "$$sd_img" -o $(BUILD_DIR)/$(APPNAME)-xrt.elf ::/$(APPNAME).elf

package-hwemu: $(SHARED_EMU_DIR)/launch_hw_emu.sh inject-hwemu

run-hwemu: package-hwemu
	cd "$(SHARED_EMU_DIR)" && ./launch_hw_emu.sh

clean-hwemu-base:
	rm -rf $(SHARED_EMU_DIR)

# ── Clean ─────────────────────────────────────────────────────────────────────
clean:
	rm -rf $(BUILD_DIR) $(VITIS_DIR) \
	       *.elf *.xclbin *.xo _x .ipcache .Xil hls logs reports \
	       *.info *.log *_summary *.out cluster/
