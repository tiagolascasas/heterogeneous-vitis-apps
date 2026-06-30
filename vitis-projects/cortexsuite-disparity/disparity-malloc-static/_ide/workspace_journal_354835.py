# 2025-03-20T03:03:08.936832
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-static")

comp = client.get_component(name="disparity_cluster")
comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

