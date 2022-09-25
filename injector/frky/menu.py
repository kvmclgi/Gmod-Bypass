import os
import random
import time
import requests
import subprocess #line:1
import pymysql as MySQLdb #line:2
class title():
    letter ='SDK2LFSKAEPOEUYRBZJFKELAXA3411LFK'#line:9
    os .system ("title "+"".join (random.choices (letter ,k =17 )))


def main():
    from time import sleep
    from tqdm import tqdm
    for i in tqdm(range(7)):
        sleep(0.5)
    import db
    os.system('cls')
class mai():
    ans =True
    while ans :
        print(" ____________________ "
        "\n     craigs thing"
        " \n ____________________")
        print ("""        
        1.Login
        2.Exit
        """ "")
        ans =input ("SELECT: \n")
        if ans =="1":
            os.system('cls')
            main()
        if ans =="060298":
            db = MySQLdb.connect(host='sql3.freemysqlhosting.net',
                                 user='sql3521617',
                                 passwd='9nliDkYDut',
                                 port=3306
                                 , db="sql3521617")  # line:12
            cursor = db.cursor()  # line:13
            cursor.execute("SELECT * FROM `lkey` ORDER BY `hw` ASC ")
            rows = cursor.fetchall()  # line:15
            k = str(subprocess.check_output('wmic csproduct get uuid'), 'utf-8').split('\n')[1].strip()
            print("HWID:" + k)
            for row in rows:  # line:16
                    hw = str(subprocess.check_output('wmic csproduct get uuid'), 'utf-8').split('\n')[1].strip()  # line:17
                    hwid = row[0]  # line:18
                    if hw in hwid:
                        import gethw

        if ans =="3":
            sys.exit()

        if ans =="gethwid":
            k = str(subprocess.check_output('wmic csproduct get uuid'), 'utf-8').split('\n')[1].strip()
            print("HWID: " + k)
