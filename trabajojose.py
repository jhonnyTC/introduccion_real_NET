import datetime
import time

#ti=0

while True:
    x = datetime.datetime.now()
    #time=str(x.day)+","+str(x.month)+","+str(x.year)+", "+ str(x.hour)+"."+str(x.minute)+"."+str(x.second)
    timestamp = str(x)+","+str(x.day)+","+str(x.month)+","+str(x.year)+","+ str(x.hour)+"."+str(x.minute)+"."+str(x.second)
    #tm = x.minute
    #if ti!=tm:
    print(timestamp)
    f = open("bigboss.csv", "a")    #CSV = Comma separated values
    f.write(timestamp)
    f.write("\n")
    f.close()
    #ti=tm
    time.sleep(1) 
