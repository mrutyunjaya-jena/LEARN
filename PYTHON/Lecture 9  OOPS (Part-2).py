# OOPS (PART-2)(INHETITANCE , POLYMORPHISM)

#  DEL KEYWORD IN OOPS 

class Student:
    def __init__(self, fullname,roll,sec):
        self.name = fullname
        self.roll= roll
        self.sec=sec

s1 = Student("mantu", 12, "B")
s2 = Student("babi ", 290 , "C")
print(s1.name, s1.roll, s1.sec)
print(s2.name, s2.roll, s2.sec)

del s2

# print(s2)

# PRIVATE(LIKE) ATTRIBUTE AND METHOD 
# ONLY CAN BE CALLED IN THE SAME CLASS , CAN'T BE CALLED IN OUTSIDE 

class Account:
    def __init__(self,acc_no,acc_pass):
        self.acc_no= acc_no
        self.__acc_pass= acc_pass

    def forgot(self):
        print(self.__acc_pass)

acc1 = Account(31315,"pass1234")

acc1.forgot()

# INHERITANCE 
# SINGLE , MULTI-LEVEL ,MULTIPLE INHERITANCE 
class Car:
    @staticmethod
    def Start():
        print("car started ")

    @staticmethod
    def Stop():
        print("car stopped ")

class toyotaCar(Car):
    def __init__(self, name):
        self.name=name

c1= toyotaCar("fortuner")
c2= toyotaCar("pirsus")

print(c1.name)
print(c1.Start())

# SUPER METHOD
# HELPS TO CALL PARENT METHOD IN A CHILD CLASS 
class Car:
    def __init__(self, type):
        self.type= type


    @staticmethod
    def Start():
        print("car started ")

    @staticmethod
    def Stop():
        print("car stopped ")

class toyotaCar(Car):
    def __init__(self, name, type):
        self.name=name
        super().__init__(type)

c1= toyotaCar("fortuner","electric")
c2= toyotaCar("pirsus", "fuelbase")
print(c1.type)

# CLASS METHOD 

class Person:
    name= "Anonymus"

    @classmethod
    def ChangeName(cls, name):
        cls.name=name

p1= Person()
p1.ChangeName("vineet panda")

print(p1.name)
print(Person.name)


# PROPERTY DECORATOR 

class student():
    def __init__(self, mth , phy , che):
        self.phy= phy
        self.mth= mth
        self.che= che

    @property
    def percentage(self):
        return str((self.mth + self.phy + self.che)/3) + "%"

stu1= student(100,95,98)
print(stu1.percentage)

stu1.phy = 99
print(stu1.percentage)

# POLYMORPHISM : OPERATOR OVERLOADING 
class Complex():
    def __init__(self, real, img):
        self.real =real
        self.img =img
    def ShowNum(self):
        print(self.real,"i +",self.img,"j")

    def add(self, n2):
        newReal = self.real + n2.real
        newImg = self.img + n2.img
        return Complex(newReal , newImg)

n1 = Complex(1 ,3)
n1.ShowNum()

n2 = Complex(4 ,3)
n2.ShowNum()

n3= n1.add(n2)
n3.ShowNum()


# SAME THING USING DUNDER FUNCTION

class Complex():
    def __init__(self, real, img):
        self.real =real
        self.img =img
    def ShowNum(self):
        print(self.real,"i +",self.img,"j")

    def __add__(self, n2):
        newReal = self.real + n2.real
        newImg = self.img + n2.img
        return Complex(newReal , newImg)
    def __sub__(self, n2):
        newReal = self.real - n2.real
        newImg = self.img - n2.img
        return Complex(newReal , newImg)


n1 = Complex(7 ,9)
n1.ShowNum()

n2 = Complex(5 ,2)
n2.ShowNum()

n3= n1 + n2
n3= n1 - n2
n3.ShowNum()
