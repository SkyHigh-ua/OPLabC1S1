n = int(input("Введіть кількість коренів: "))
result = 0
for i in range(n):
    result += 2
    result **= 0.5
print("Результат = ", result)
