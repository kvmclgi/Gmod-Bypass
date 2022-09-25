import os
from os import system
import subprocess
import requests

def hw():
    h = str(subprocess.check_output(
    'wmic csproduct get uuid')).split('\\r\\n')[1].strip('\\r').strip()
    d = requests.get('https://pastebin.com/Ls12iAyM')

    if h in d.text:
        auths = True

    else:
        auths = False
        exit()