import os

import mysql.connector

class mainconn():

    connection = mysql.connector.connect(host='sql3.freemysqlhosting.net',
                                         database='sql3521617',
                                         user='sql3521617',
                                         password='9nliDkYDut')
def sq1con():
    mainconn.connection
    sq1 = "select * from lkey"
    cursor = mainconn.connection.cursor()
    cursor.execute(sq1)
    records = cursor.fetchall()
    print("\nFETCHING:")
    os.system('cls')
    from time import sleep
    from tqdm import tqdm
    for i in tqdm(range(3)):
        sleep(0.3)
    for row in records:
        sleep(0.4)
        print("HWID: ", row[0])
def sq2con():
    mainconn.connection
    sq2 = "select * from date"
    cursor = mainconn.connection.cursor()
    cursor.execute(sq2)
    records = cursor.fetchall()
    for row in records:
        print("DATE: ", row[0])

sq1con()
sq2con()






