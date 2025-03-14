# 2025-02-20T23:52:18.482944
import vitis

client = vitis.create_client()
client.set_workspace(path="spam-filter-with-debugging")

vitis.dispose()

