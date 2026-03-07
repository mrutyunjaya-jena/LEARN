# DICTONARIES IN PYTHON (KEY : VALUE )
# MUTABLE 
# NO DUPLICATE KEY 
# TUPLE IMMUTABLE

student = {

    "name" : "mantu",
    "roll" : 90 ,
    "SGPA" : 9.2 ,
    "MARKS" : [100,90,80,94]
}

print(type(student))
print(student)
print(student["name"])
print(type("name"))


# NESTED DICTIONARIES 

student_cse = {

   "SEC": "B",
   "B":{
       "name" :("syam" , "hari" , "ram","syam" )
   }
   
}
print(student_cse)


# DICTIONARY METHODS

print(student.keys())
print(student.values())
print(student.items())
print(student.get("name"))
student.update({"city": "brahmapur"}) # ONLY ONE ARGUMENT CAN BE PASSED AT ONCE
print(student)

# SETS IN PYTHON 
#COLLECTION OF UNORDERED ITEMS , MUST UNIQUE , SET IS IMMUTABLE BUT ITS ELEMENTS ARE MUTABLE

a = {1,2,3,3,3,3,6,4,5} #IGNORES DUPLICATES
print(type(a))
print(a)
print(len(a)) # UNIQUE LENGTH
b = set() # EMPTY SET , NULL SET 
print(b)
print(len(b))

# SET METHODS (DSA)
b.add(1)
b.add(4)
b.add(13)
b.add(11)
b.add("Mantu")
b.add((1,2,3))
# b.add({"name":"chintu"}) TypeError: unhashable type: 'dict'
# b.add([1,2,3]) TypeError: unhashable type: 'list'
b.remove(1) # REMOVES ENTERED VALUE 
b.pop() # REMOVR RANDOME VALUE  
#b.clear() # CLEARS THE SET 
print(b)

# SET METHODS (MATH)
c = {1,2,3,4,5,6,7,8}
d = {2,4,6,0,6,4,3}
print(c.union(d))
print(c.intersection(d))
