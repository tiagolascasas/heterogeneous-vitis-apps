# 2025-02-20T18:52:20.701194
import vitis

client = vitis.create_client()
client.set_workspace(path="spam-filter-with-debugging")

proj = client.get_sys_project(name="spam-filter")

proj.build(target = "hw",comp_name = ["spam-filter_cluster"],build_comps = False)

proj = proj.update_platform(platform="/tools/Xilinx/Vitis/2024.2/base_platforms/xilinx_zcu102_base_202420_1/xilinx_zcu102_base_202420_1.xpfm")

comp = client.get_component("spam-filter_host")

status = comp.set_sysroot(sysroot="/opt/Xilinx/xilinx-zynqmp-common-v2024.2/rootfs")

comp = client.get_component("spam-filter_host")

status = comp.set_sysroot(sysroot="/opt/xilinx/xilinx-zynqmp-common-v2024.2/rootfs")

comp = client.get_component("spam-filter_host")

status = comp.set_sysroot(sysroot="/opt/xilinx/xilinx-zynqmp-common-v2024.2/rootfs")

proj.build(target = "hw_emu",comp_name = ["spam-filter_cluster"],build_comps = False)

comp = client.get_component(name="spam-filter_cluster")
comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="PACKAGE")

comp.run(operation="IMPLEMENTATION")

