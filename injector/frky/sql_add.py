import subprocess #line:1
import sys
import pymysql as MySQLdb #line:2
import os #line:4
from sys import stderr ,stdin ,stdout ,platform
import ctypes #line:6
import random #line:7
import string #line:8

class title():
    letter ='SDK2LFSKAEPOEUYRBZJFKELAXA3411LFK'#line:9
    os .system ("title "+"".join (random .choices (letter ,k =17 )))
class lock ():#line:11
    from datetime import datetime
    now = datetime.now()
    w = str(subprocess.check_output('wmic csproduct get uuid'), 'utf-8').split('\n')[1].strip()
    db=MySQLdb .connect (host ='sql3.freemysqlhosting.net',
                          user ='sql3521617',
                          passwd ='9nliDkYDut',
                          port =3306
                         ,db ="sql3521617")#line:12

    cur=db.cursor()#line:13
    cur.execute(
        'INSERT INTO lkey(hw) VALUES ("{}")'.format(w))
    db.commit()
    rows = cur.fetchall()  # line:15



