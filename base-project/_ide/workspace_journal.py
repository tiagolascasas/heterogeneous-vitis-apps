# 2026-06-27T00:16:13.234336
import vitis

client = vitis.create_client()
client.set_workspace(path="base-project")

comp = client.get_component(name="hello_world_host")
comp.build(target="x86sim")

proj = client.get_sys_project(name="hello_world")

proj.build(target = "hw_emu",comp_name = ["hello_world_vadd", "hello_world_host"],build_comps = False)

proj.build(target = "hw_emu",comp_name = ["hello_world_host"],build_comps = False)

vitis.dispose()

