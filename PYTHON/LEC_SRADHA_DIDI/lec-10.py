# ERROR AND EXCEPTION HANDLING


try:
    number = int(input("enter a num : "))
    print(1/number)
except ZeroDivisionError:
    print("you can't devide by a zero , IDIOT \n")
except ValueError:
    print("it is not a number , enter a number")
except Exception:
    print("something is wrong  here ")
finally:
    print("do some cleanup")
