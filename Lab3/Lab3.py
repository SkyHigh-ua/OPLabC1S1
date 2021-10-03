from math import pi, log, sin
acur = int( input( "Введіть точність ε = " ) )
n = int( input( "Введіть точність обчислень = " ) )
sumfx = 0
h = pi / n
for i in range(1, n+1):
    x = i * h - h / 2
    fx = log( 2 + sin(x) )
    sumfx += fx
result = h * sumfx
print( "Результат =", round( result, acur ) )
