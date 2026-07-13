# ── Target Selection ──────────────────────────────────────────────────────────
TARGET ?= zcu102

ifeq ($(TARGET), u250)
PLATFORM := xilinx_u250_gen3x16_xdma_4_1_202210_1
PART := xcu250-figd2104-2L-e
else
PLATFORM := xilinx_zcu102_base_202420_1
PART := xczu9eg-ffvb1156-2-e
endif

ifneq (,$(findstring u250,$(PLATFORM)))
IS_ALVEO = 1
else
IS_ALVEO = 0
endif

# ── System-dependent flags ────────────────────────────────────────────────────
ifeq ($(IS_ALVEO), 1)
HOST_CXX ?= g++
SYSROOT ?= 
XRT_PATH ?= /opt/xilinx/xrt
else
HOST_CXX ?= $(XILINX_VITIS)/gnu/aarch64/lin/aarch64-linux/bin/aarch64-linux-gnu-g++
SYSROOT ?= /home/tls/xilinx/sysroots/xilinx-zynqmp-common-v2024.2/sysroots/cortexa72-cortexa53-xilinx-linux
# Common image for hw_emu packaging (rootfs + kernel).
COMMON_IMAGE_DIR ?= /home/tls/xilinx/sysroots/xilinx-zynqmp-common-v2024.2
ROOTFS           ?= $(COMMON_IMAGE_DIR)/rootfs.ext4
KERNEL_IMAGE     ?= $(COMMON_IMAGE_DIR)/Image
endif

# ── App-specific variables ────────────────────────────────────────────────────
APPNAME ?= app
TOP     ?= cluster
RUNTIME ?= xrt
HOST_SRCS ?= $(wildcard *.cpp)
BRIDGE_SRCS ?=
HOST_SUFFIX ?=
HOST_VARIANTS ?=
COMMON_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))_common
BUILD_DIR ?= build
VITIS_DIR ?= vitis
ELF_PATH ?= $(BUILD_DIR)/$(APPNAME)$(HOST_SUFFIX)_$(TARGET).elf
DEFAULT_ELF = $(if $(strip $(HOST_VARIANTS)),$(BUILD_DIR)/$(APPNAME)-$(firstword $(HOST_VARIANTS))_$(TARGET).elf,$(ELF_PATH))
XO_PATH ?= $(BUILD_DIR)/$(TOP)_$(TARGET).xo
HW_XCLBIN ?= $(BUILD_DIR)/$(TOP)_hw_$(TARGET).xclbin
HW_EMU_XCLBIN ?= $(BUILD_DIR)/$(TOP)_hw_emu_$(TARGET).xclbin


ifeq ($(IS_ALVEO), 0)
# Shared across all apps on the same platform: rootfs + kernel are identical.
SHARED_EMU_DIR ?= $(COMMON_DIR)/package_hw_emu_$(TARGET)
# Supply any hw_emu xclbin to 'setup-hwemu' to build the full QEMU base image.
SEED_XCLBIN    ?=
endif

# ── Compilation flags ─────────────────────────────────────────────────────────
ifeq ($(IS_ALVEO), 1)
CXXFLAGS        += -std=c++17 -Wall -O3
RUNTIME_CXXFLAGS = $(if $(filter opencl,$(RUNTIME)),-DUSE_OPENCL,\
                   $(if $(filter axi,$(RUNTIME)),-DUSE_AXI,))
RUNTIME_INCLUDES = $(if $(filter opencl,$(RUNTIME)),-I$(XRT_PATH)/include,\
                   $(if $(filter axi,$(RUNTIME)),,-I$(XRT_PATH)/include/xrt -I$(XRT_PATH)/include))
COMMA := ,
RUNTIME_LIBS     = $(if $(filter opencl,$(RUNTIME)),-L$(XRT_PATH)/lib -Wl$(COMMA)-rpath=$(XRT_PATH)/lib -lOpenCL -lpthread,\
                   $(if $(filter axi,$(RUNTIME)),-L$(XRT_PATH)/lib -Wl$(COMMA)-rpath=$(XRT_PATH)/lib -lpthread,\
                   -L$(XRT_PATH)/lib -Wl$(COMMA)-rpath=$(XRT_PATH)/lib -lxrt_coreutil -lpthread))
else
CXXFLAGS        += -std=c++17 -Wall -O3 --sysroot=$(SYSROOT)
RUNTIME_CXXFLAGS = $(if $(filter opencl,$(RUNTIME)),-DUSE_OPENCL,\
                   $(if $(filter axi,$(RUNTIME)),-DUSE_AXI,))
RUNTIME_INCLUDES = $(if $(filter opencl,$(RUNTIME)),-I$(SYSROOT)/usr/include,\
                   $(if $(filter axi,$(RUNTIME)),,-I$(SYSROOT)/usr/include/xrt))
RUNTIME_LIBS     = $(if $(filter opencl,$(RUNTIME)),-L$(SYSROOT)/usr/lib -lOpenCL -lpthread,\
                   $(if $(filter axi,$(RUNTIME)),-L$(SYSROOT)/usr/lib -lpthread,\
                   -L$(SYSROOT)/usr/lib -lxrt_coreutil -lpthread))
endif

HOST_CXXFLAGS ?= $(CXXFLAGS) $(RUNTIME_CXXFLAGS)
HOST_INCLUDES ?= $(RUNTIME_INCLUDES)
HOST_LIBS ?= $(RUNTIME_LIBS)

.DEFAULT_GOAL := host

.PHONY: help
help:
	@echo "Usage: make [target] [TARGET=zcu102|u250]"
	@echo "  (Current TARGET: $(TARGET), PLATFORM: $(PLATFORM))"
	@echo ""
	@echo "Host Targets:"
	@echo "  host               Build default host ELF(s) (depends on HOST_VARIANTS)"
	@echo "  host-<variant>     Build specific host variant (e.g., host-xrt, host-opencl)"
	@echo ""
	@echo "Kernel / HLS Targets:"
	@echo "  synthesis          Run HLS synthesis"
	@echo "  impl               Run HLS implementation (creates .xo)"
	@echo ""
	@echo "Hardware Link Targets:"
	@echo "  link-hw            Link hardware for board deployment (creates .xclbin)"
	@echo "  link-hwemu         Link hardware for emulation (creates hw_emu .xclbin)"
	@echo ""
	@echo "Hardware Emulation Targets:"
	@echo "  [Alveo / PCIe Workflow (x86) - Requires TARGET=u250]"
	@echo "  emconfig           Generate emconfig.json for Alveo emulation"
	@echo "  run-hwemu          Run host executable natively with XCL_EMULATION_MODE=hw_emu"
	@echo "  run-sw             Run host executable natively without XRT initialization (SW mode)"
	@echo "  run-hw-mocked      Run host executable natively with XRT initialization but simulated compute (OFFLOAD_SIM=1)"
	@echo "  run-hw             Run host executable natively on the actual hardware (OFFLOAD=1)"
	@echo ""
	@echo "  [Zynq / Edge Workflow (QEMU) - Requires TARGET=zcu102]"
	@echo "  setup-hwemu        Build the shared QEMU base image (run once per platform)"
	@echo "  inject-hwemu       Fast path: inject xclbin/ELF into existing QEMU image offline"
	@echo "  inject-hwemu-live  Inject xclbin/ELF via SCP to a running QEMU instance"
	@echo "  package-hwemu      Ensure base image exists and inject app files"
	@echo "  run-hwemu          Package and run hw_emu in QEMU"
	@echo ""
	@echo "Cleanup Targets:"
	@echo "  clean              Remove app-local build artifacts"
	@echo "  clean-hwemu-base   Remove the shared QEMU base image (Zynq only)"

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

HLS_CFG := hls-config-$(TARGET).cfg
LINK_CFG := cluster-link-$(TARGET).cfg

.PHONY: update_cfg synthesis impl

# ── Helpers ───────────────────────────────────────────────────────────────────
update_cfg:
	@echo "Checking top function in $(HLS_CFG)"
	@grep -q "^syn.top=$(TOP)$$" $(HLS_CFG) || sed -i "s/^syn.top=.*/syn.top=$(TOP)/" $(HLS_CFG)


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
$(VITIS_DIR)/hls/hls_status: $(HLS_CFG) | update_cfg dirs
	v++ --compile --mode hls --config $(HLS_CFG) --work_dir $(VITIS_DIR)/hls --part $(PART)
	mkdir -p $(dir $@) && touch $@

synthesis: $(VITIS_DIR)/hls/hls_status

$(XO_PATH): $(VITIS_DIR)/hls/hls_status
	vitis-run --mode hls --impl --config $(HLS_CFG) --work_dir $(VITIS_DIR)/hls --part $(PART)
	$(MAKE) capture_xo

impl: $(XO_PATH)

# ── HW link (board) ───────────────────────────────────────────────────────────
$(HW_XCLBIN): $(XO_PATH) | dirs
	v++ -l -t hw \
	    --platform $(PLATFORM) \
	    --temp_dir $(VITIS_DIR)/link_hw/temp \
	    --log_dir $(VITIS_DIR)/link_hw/logs \
	    --report_dir $(VITIS_DIR)/link_hw/reports \
	    --config $(LINK_CFG) \
	    $(XO_PATH) \
	    -o $(HW_XCLBIN)
	@mkdir -p backups
	@cp $(HW_XCLBIN) backups/$$(basename $(HW_XCLBIN) .xclbin)_$$(date +%Y%m%d_%H%M%S).xclbin

link-hw: $(HW_XCLBIN)

# ── HW emulation ─────────────────────────────────────────────────────────────
# Step 1 – link: produces the hw_emu xclbin.
GCC_WRAP_DIR := $(COMMON_DIR)/gcc-wrap

$(GCC_WRAP_DIR)/gcc:
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
	    --config $(LINK_CFG) \
	    $(XO_PATH) \
	    -o $(HW_EMU_XCLBIN)
	@mkdir -p backups
	@cp $(HW_EMU_XCLBIN) backups/$$(basename $(HW_EMU_XCLBIN) .xclbin)_$$(date +%Y%m%d_%H%M%S).xclbin

link-hwemu: $(HW_EMU_XCLBIN)

ifeq ($(IS_ALVEO), 1)

emconfig:
	emconfigutil --platform $(PLATFORM) --od .

run-hwemu: host link-hwemu emconfig
	XCLBIN=$(HW_EMU_XCLBIN) XCL_EMULATION_MODE=hw_emu ./$(DEFAULT_ELF) $(APP_ARGS)



else

# Step 2 – emconfig: XRT reads this at runtime to select the hw_emu path.
$(SHARED_EMU_DIR):
	mkdir -p $$@

$(SHARED_EMU_DIR)/emconfig.json: | $(SHARED_EMU_DIR)
	emconfigutil --platform $(PLATFORM) --od $(SHARED_EMU_DIR)

emconfig: $(SHARED_EMU_DIR)/emconfig.json

# setup-hwemu: build the shared QEMU base image once for the current platform.
.PHONY: setup-hwemu
setup-hwemu: $(SHARED_EMU_DIR)/emconfig.json
	@if [ -f "$(SHARED_EMU_DIR)/launch_hw_emu.sh" ]; then \
		echo "QEMU base image already present at $(SHARED_EMU_DIR)"; \
	else \
		seed="$(SEED_XCLBIN)"; \
		if [ -z "$$seed" ]; then \
			seed=$$(find "$$(dir $$(abspath $$(lastword $$(MAKEFILE_LIST))))" \
			             -maxdepth 4 -name "*_hw_emu_$(TARGET).xclbin" 2>/dev/null | head -1); \
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
		sed -i 's/"$$@"/  -forward-port 1440 22 \\\n"$$@"/' $(SHARED_EMU_DIR)/launch_hw_emu.sh; \
	fi

# Step 3 – package: assembles rootfs + kernel + ELF + xclbin into a QEMU image
$(SHARED_EMU_DIR)/launch_hw_emu.sh: $(HW_EMU_XCLBIN) host $(SHARED_EMU_DIR)/emconfig.json
	mkdir -p $(BUILD_DIR)/hw_emu_pkg
	cp $(HW_EMU_XCLBIN) $(BUILD_DIR)/hw_emu_pkg/cluster.xclbin
	cp $(BUILD_DIR)/$(APPNAME)-xrt_$(PLATFORM).elf $(BUILD_DIR)/hw_emu_pkg/$(APPNAME).elf
	v++ -p -t hw_emu \
	    --platform $(PLATFORM) \
	    --package.out_dir     $(SHARED_EMU_DIR) \
	    --package.rootfs      $(ROOTFS) \
	    --package.kernel_image $(KERNEL_IMAGE) \
	    --package.sd_file     $(BUILD_DIR)/hw_emu_pkg/cluster.xclbin \
	    --package.sd_file     $(BUILD_DIR)/hw_emu_pkg/$(APPNAME).elf \
	    --package.sd_file     $(SHARED_EMU_DIR)/emconfig.json \
	    $(BUILD_DIR)/hw_emu_pkg/cluster.xclbin; \
	sed -i 's/"$$@"/  -forward-port 1440 22 \\\n"$$@"/' $(SHARED_EMU_DIR)/launch_hw_emu.sh

# Inject only the app-specific files into the shared FAT image.
.PHONY: inject-hwemu
inject-hwemu: $(HW_EMU_XCLBIN) host
	@sd_img=$$(find "$(SHARED_EMU_DIR)" -maxdepth 1 -name "*.img" 2>/dev/null | head -1); \
	[ -n "$$sd_img" ] || { echo "ERROR: no .img found in $(SHARED_EMU_DIR)"; exit 1; }; \
	echo "Injecting app files into $$sd_img ..."; \
	mmd -i "$$sd_img@@1048576" ::/$(APPNAME) 2>/dev/null || true; \
	mcopy -i "$$sd_img@@1048576" -o $(HW_EMU_XCLBIN) ::/$(APPNAME)/cluster.xclbin; \
	mcopy -i "$$sd_img@@1048576" -o $(BUILD_DIR)/$(APPNAME)-xrt_$(PLATFORM).elf ::/$(APPNAME)/$(APPNAME).elf; \
	if [ -d "data" ]; then \
		mmd -i "$$sd_img@@1048576" ::/$(APPNAME)/data 2>/dev/null || true; \
		mcopy -i "$$sd_img@@1048576" -o -s data/* ::/$(APPNAME)/data/; \
	fi

.PHONY: inject-hwemu-live
inject-hwemu-live: $(HW_EMU_XCLBIN) host
	@echo "Injecting app files into live emulator via SCP (port 1440)..."
	@echo "Note: Default Petalinux password is usually 'root'."
	ssh -p 1440 -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null root@localhost "mkdir -p /home/root/$(APPNAME)"
	scp -P 1440 -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null $(HW_EMU_XCLBIN) root@localhost:/home/root/$(APPNAME)/cluster.xclbin
	scp -P 1440 -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null $(BUILD_DIR)/$(APPNAME)-xrt_$(PLATFORM).elf root@localhost:/home/root/$(APPNAME)/$(APPNAME).elf
	@if [ -d "data" ]; then \
		ssh -p 1440 -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null root@localhost "mkdir -p /home/root/$(APPNAME)/data"; \
		scp -P 1440 -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null -r data/* root@localhost:/home/root/$(APPNAME)/data/; \
	fi

package-hwemu: $(SHARED_EMU_DIR)/launch_hw_emu.sh inject-hwemu

run-hwemu: package-hwemu
	cd "$(SHARED_EMU_DIR)" && ./launch_hw_emu.sh

clean-hwemu-base:
	rm -rf $(SHARED_EMU_DIR)

endif # IS_ALVEO

# ── Clean ─────────────────────────────────────────────────────────────────────
clean:
	@echo "Cleaning intermediate build files..."
	rm -rf $(VITIS_DIR) \
	       *.elf *.xo _x .ipcache .Xil hls logs reports \
	       *.info *.log *_summary *.out cluster/ emconfig.json xelab.pb \
		   xcd.log Image boot.scr *.csv *.run_summary *.jou *.str .run/ \
		   .Xil/ sd_card/ vitis_analyzer* *.txt *.txt.gz _ide/

clean-all: clean
	@echo "Cleaning all build files and bitstreams..."
	rm -rf $(BUILD_DIR) *.xclbin

# ── Explicit Native Execution (U250 + XRT Only) ──────────────────────────────
.PHONY: run-sw run-hw-mocked run-hw

U250_XRT_ELF = $(BUILD_DIR)/$(APPNAME)$(if $(strip $(HOST_VARIANTS)),-xrt,)_u250.elf
U250_HW_XCLBIN = $(BUILD_DIR)/$(TOP)_hw_u250.xclbin

run-sw:
	$(MAKE) host TARGET=u250
	./$(U250_XRT_ELF) $(APP_ARGS)

run-hw-mocked:
	$(MAKE) host TARGET=u250
	XCLBIN=$(U250_HW_XCLBIN) OFFLOAD_SIM=1 ./$(U250_XRT_ELF) $(APP_ARGS)

run-hw:
	$(MAKE) host TARGET=u250
	XCLBIN=$(U250_HW_XCLBIN) OFFLOAD=1 ./$(U250_XRT_ELF) $(APP_ARGS)
