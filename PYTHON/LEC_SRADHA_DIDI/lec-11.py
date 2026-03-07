#LAMBDA FUNCTION IN PYTHON


add = lambda a, b: a + b




ano = lambda a, b: a == b

print(ano(5 ,100))


#map()
numbers = [1, 2, 3, 4]

result = list(map(lambda x: x * 2, numbers))
print(result)

#FILTER()

grades = [91, 32, 83, 44, 75, 56, 67]

passing_grades = list(filter(lambda grade: grade >= 60, grades))

print(passing_grades)

#reduce()

from functools import reduce
prices = [19.99, 1.00, 5.75, 12.99, 10.99]

total = reduce(lambda x, y: x + y, prices)

print(f"${total}")