# 2026-05-26T15:11:45.584163
import vitis

client = vitis.create_client()
client.set_workspace(path="base-project")

comp = client.get_component(name="hello_world_vadd")
comp.run(operation="CO_SIMULATION")

vitis.dispose()

