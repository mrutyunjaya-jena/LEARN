# OOPS (PART-1)(ABSTRACTION , ENCAPSULATION)
# CLASS AND OBJECTS

class Student: # CLASS
    name = "mantu"
    roll = 90
    sgpa = 7


s1 =  Student() # OBJECT
print(s1.name,s1.roll,s1.sgpa)



# CONSTRUCTOR 
# __init__ FUNCTIONS  
# DEFAULT CONSTRUCTOR 
class Person:
    def __init__(self , fullname):
        pass
    

# PARAMETERIZED CONSTRUCTOR 
class Person:
    def __init__(self , fullname):
        self.name = fullname

    def wlc(self):
        print(f"welcome {self.name}")

# STATIC METHOD
    @staticmethod
    def greet():
        print("hello , every one")

p1 = Person("Mantu")
print(p1.name)
p1.wlc()
p1.greet()
 

