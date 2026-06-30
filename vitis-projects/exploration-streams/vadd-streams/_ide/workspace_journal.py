# 2025-03-14T23:57:03.625950
import vitis

client = vitis.create_client()
client.set_workspace(path="vadd-streams")

proj = client.create_sys_project(name="vadd", platform="/tools/Xilinx/Vitis/2024.2/base_platforms/xilinx_zcu102_base_202420_1/xilinx_zcu102_base_202420_1.xpfm", template="installed_examples/vadd")

proj = client.get_sys_project(name="vadd")

proj.build(target = "hw_emu",build_comps = False)

comp = client.get_component(name="vadd_host")
comp.build(target="x86sim")

vitis.dispose()

