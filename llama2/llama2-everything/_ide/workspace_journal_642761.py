# 2025-02-20T22:10:40.583950
import vitis

client = vitis.create_client()
client.set_workspace(path="llama2-everything")

proj = client.get_sys_project(name="llama2")

proj = proj.update_platform(platform="/tools/Xilinx/Vitis/2024.2/base_platforms/xilinx_zcu102_base_202420_1/xilinx_zcu102_base_202420_1.xpfm")

comp = client.get_component("llama2_host")

status = comp.set_sysroot(sysroot="/opt/xilinx/xilinx-zynqmp-common-v2024.2/rootfs")

comp = client.get_component(name="llama2_cluster")
comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

