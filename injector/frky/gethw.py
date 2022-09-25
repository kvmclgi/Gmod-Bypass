import subprocess #line:1
import sys
import time
import pymysql as MySQLdb #line:2
import os #line:4
from sys import stderr ,stdin ,stdout ,platform
import ctypes #line:6
import random #line:7
import string #line:8

class title():
    letter ='SDK2LFSKAEPOEUYRBZJFKELAXA3411LFK'#line:9
    os .system ("title "+"".join (random .choices (letter ,k =17 )))

class hwf ():#line:11
    from datetime import datetime
    now = datetime.now()
    k = str(subprocess.check_output('wmic csproduct get uuid'), 'utf-8').split('\n')[1].strip()
    db=MySQLdb .connect (host ='sql3.freemysqlhosting.net',
                          user ='sql3521617',
                          passwd ='9nliDkYDut',
                          port =3306
                         ,db ="sql3521617")#line:12
    print(" ________________________________________________"
          "\n YOUR HWID:", k,
          " \n ________________________________________________")
    j = input("ENTER HWID: ")
    time.sleep(0.5)
    print("HWID ADDED! ")
    time.sleep(0.6)
    os.system('cls')
    cur=db.cursor()#line:13
    cur.execute(
        'INSERT INTO date(date) VALUES ("{}")'.format(now))
    print("LOGGED")
    time.sleep(0.3)
    os.system('cls')
    cur.execute(
        'INSERT INTO lkey(hw) VALUES ("{}")'.format(j))
    db.commit()
    rows = cur.fetchall()  # line:15
    import menu
