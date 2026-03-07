# FILE I/O
# READ THE FILE 
f = open("demo.txt" , "r")
# print(f.read()) # ENTIRE LINE 
print(f.read(5))
print(f.readline())
print(type(f.read()))
f.close()


# WRITE THE FILE 

fw = open("demo.txt","a")

fw.write(" , hello my name is mj  ")
fw.close()

fw = open("demo.txt","r+")
fw.write(" \n my friend mane is me \n")
fw.close()


# WITH SYNTAX 
with open("demo.txt", "r+") as f:
    data = f.read()
    print(data)



# DELETE OPERATION IN FILE
#  REQUIRED TO IMPORT THE MODULE <IMPORT OS>
import os
os.remove("hello.txt")