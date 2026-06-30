# 2026-04-27T09:57:31.320622
import vitis

client = vitis.create_client()
client.set_workspace(path="base-project")

proj = client.get_sys_project(name="hello_world")

proj.build(target = "sw_emu",build_comps = False)

proj.build(target = "hw_emu",build_comps = False)

proj.build(target = "hw_emu",comp_name = ["hello_world_host", "hello_world_vadd"],build_package = True,build_comps = False)

