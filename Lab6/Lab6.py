def fx(x):
    resfx = 0
    resfx = sumx(1, x)/sumx(0, x)
    return resfx

def sumx(sn, x):
    resum = 0
    for k in range(21):
        n = 2*k+sn
        resum += x**n/fact(n)
    return resum

def fact(num):
    if num == 0:
        return 1
    else:
        return num*fact(num-1)

a = float(input( "Введіть значення a: "))
num1 = 2*fx(0.5)-3*fx(a-0.1)
num2 = 5-fx(4*a-1)
if num2 == 0:
    print( "Ділення на 0" ) # Функція не існує, якщо знаменник = 0
else:
    res = num1/num2
    print ("Результат =", res)