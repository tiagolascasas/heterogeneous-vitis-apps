# 2025-06-05T02:59:11.515869
import vitis

client = vitis.create_client()
client.set_workspace(path="hello_world")

vitis.dispose()

