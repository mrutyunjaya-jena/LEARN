# LOOPS (for , while , Range)


# WHILE LOOP

 
a = 1
while a <= 10:
    if(a == 5):
        a += 1
        continue
    
    print(a)
    a += 1


a = 1
while a <= 10:
    if(a == 5):
        a += 1
        break
    
    print(a)
    a += 1


# FOR LOOP 
list = [1,2,3,4,5,6,7]

for val in list :
    print(val )


# RANGE IN FOR LOOP
# range(start , stop , step )
print("single mod")
for a in range(11):
    print(a)
print("double mod")
for a in range(0 , 10 ):
    print(a)
print("triple mod")
for a in range(0 , 100 ,3):
    print(a)

# PASS STATEMENT IN RANGE (USALLY USED FOR EMPTY RANGE FOR LOOP )
print("pass statement")
for a in range(11):
    pass
print("statement passed ")