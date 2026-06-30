# 2025-06-04T19:05:23.819856
import vitis

client = vitis.create_client()
client.set_workspace(path="amd-vadd-kv260")

status = client.add_platform_repos(platform=["/home/tls/dev/kria-vitis-platforms/kr260/platforms"])

status = client.add_platform_repos(platform=["/home/tls/dev/kria-vitis-platforms/kv260/platforms/kv260_bist"])

status = client.add_platform_repos(platform=["/home/tls/dev/kria-vitis-platforms/kv260/platforms/xilinx_kv260_bist_202410_1"])

proj = client.create_sys_project(name="vadd", platform="$COMPONENT_LOCATION/../../../kria-vitis-platforms/kv260/platforms/xilinx_kv260_bist_202410_1/kv260_bist.xpfm", template="vitis_examples/hello_world")

comp = client.get_component(name="vadd_vadd")
comp.run(operation="SYNTHESIS")

comp = client.get_component(name="vadd_host")
comp.build(target="x86sim")

proj = client.get_sys_project(name="vadd")

proj.build(target = "hw",comp_name = ["vadd_vadd"],build_comps = False)

proj.build(target = "hw",comp_name = ["vadd_vadd"],build_comps = False)

vitis.dispose()

