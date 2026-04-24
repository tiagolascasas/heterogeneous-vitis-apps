# 2026-04-18T00:57:09.411476
import vitis

client = vitis.create_client()
client.set_workspace(path="vadd-zcu102")

proj = client.create_sys_project(name="hello_world", platform="/tools/Xilinx/Vitis/2024.2/base_platforms/xilinx_zcu102_base_202420_1/xilinx_zcu102_base_202420_1.xpfm", template="vitis_examples/hello_world")

comp = client.get_component(name="hello_world_host")
comp.build(target="hw")

comp = client.get_component(name="hello_world_vadd")
comp.run(operation="SYNTHESIS")

proj = client.get_sys_project(name="hello_world")

proj.build(target = "hw",comp_name = ["hello_world_vadd", "hello_world_host"],build_comps = False)

proj.build(target = "hw_emu",build_comps = False)

