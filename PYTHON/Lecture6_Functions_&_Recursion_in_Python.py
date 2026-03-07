# USERDEFINED FUNCTION IN PYTHON 

# PARAMETERIZED FUNCTION
def calc(a,b,c,d):
    x = a + b + c + d
    print(x)
    return x


calc(1,3,2,6)

# NON PARAMETERIZES FUNCTION

def welc():
    print(" hello ,\n my name is a mantu and i am a CSE student ,\n i am from section b ")
    return 0

welc()


# END AND SEP 
print("hello ", end="")
print("world")


# DEFAULT PARAMETER
def calc(a=5 , b=3):
    print(a * b)
    return a*b

calc()


# RECURSION 
print("PRINTING FACTORIAL ")
def fact(n):
    if(n == 0 or n ==1):
        return 1
    return(n * fact(n-1))

print("factorial of  is = ",fact(23))

print("REVERSE ORDER NUM ")
def revnum(x):
    if(x == 0 ):
        return
    print(x)
    revnum(x-1)

revnum(9)
