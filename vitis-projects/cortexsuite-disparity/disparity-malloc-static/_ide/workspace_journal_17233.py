# 2025-03-27T03:01:40.666729
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-static")

comp = client.get_component(name="disparity_cluster")
comp.run(operation="IMPLEMENTATION")

proj = client.get_sys_project(name="disparity")

proj.build(target = "hw",comp_name = ["disparity_cluster"],build_comps = False)

proj = proj.update_platform(platform="/tools/Xilinx/Vitis/2024.2/base_platforms/xilinx_zcu102_base_202420_1/xilinx_zcu102_base_202420_1.xpfm")

proj.build(target = "hw",comp_name = ["disparity_cluster"],build_comps = False)

comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

vitis.dispose()

