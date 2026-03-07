# STRINGS PRE-DEFINED FUNCN
str1 = "hel"+"lo "
print(str1)
print(len(str1))

#STRIGG INDEX
print(str1[0])

#STRING SLICING 

print(str1[0:4])
print(str1[0:len(str1)])
print(str1[0:])
print(str1[:])
print(str1[-6:-1])

# SOME OTHER FUNCTIONS
str2 = "mantu"
print(str1.endswith("er"))
print(str1.capitalize())
print(str2.replace("mantu","chintu"))
print(str2.find("n"))
print(str2.count("a"))


#CONDITIONAL STATEMENTS 
age = int(input("Enter Your age : \n"))
if(age >= 18 ):
    print("allowed")
elif(age < 18 ):
    print("denied")
else:
    print("enter valid age !")

