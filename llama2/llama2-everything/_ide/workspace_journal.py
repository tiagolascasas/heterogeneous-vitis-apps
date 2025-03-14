# 2025-02-20T22:29:56.579415
import vitis

client = vitis.create_client()
client.set_workspace(path="llama2-everything")

comp = client.get_component(name="llama2_cluster")
comp.run(operation="IMPLEMENTATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

vitis.dispose()

