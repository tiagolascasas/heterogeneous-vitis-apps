# 2025-03-27T15:16:09.540094
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-arg")

comp = client.get_component(name="disparity_cluster")
comp.run(operation="IMPLEMENTATION")

