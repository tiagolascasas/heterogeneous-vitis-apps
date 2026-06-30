# 2026-04-27T09:55:00.188624
import vitis

client = vitis.create_client()
client.set_workspace(path="base-project")

proj = client.create_sys_project(name="hello_world", platform="/tools/Xilinx/Vitis/2024.2/base_platforms/xilinx_zcu102_base_202420_1/xilinx_zcu102_base_202420_1.xpfm", template="vitis_examples/hello_world")

proj = client.get_sys_project(name="hello_world")

proj.build(target = "sw_emu",build_comps = False)

vitis.dispose()

