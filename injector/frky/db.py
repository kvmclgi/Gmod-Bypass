import subprocess #line:1
import sys
import pymysql as MySQLdb #line:2
import time #line:3 #
import os #line:4
from sys import stderr ,stdin ,stdout ,platform
import ctypes #line:6
import random #line:7
import string #line:8


letter ='SDK2LFSKAEPOEUYRBZJFKELAXA3411LFK'#line:9
os .system ("title "+"".join (random.choices (letter ,k =17 )))

class lock ():#line:11
    db=MySQLdb .connect (host ='sql3.freemysqlhosting.net',
                          user ='sql3521617',
                          passwd ='9nliDkYDut',
                          port =3306
                         ,db ="sql3521617")#line:12
    cursor=db .cursor ()#line:13
    cursor .execute ("SELECT * FROM `lkey` ORDER BY `hw` ASC ")
    rows = cursor .fetchall ()#line:15
    for row in rows :#line:16
        hw = str (subprocess .check_output ('wmic csproduct get uuid'),'utf-8').split ('\n')[1 ].strip ()#line:17
        hwid = row[0]#line:18
        if hw in hwid :#line:19
            print ("HWID VALID!")
            time.sleep(2.5)
            os.system('cls')
            import prgx
            from prgx import cl
        else:
            print(hw + " NOT VALID!")
            raise SystemExit