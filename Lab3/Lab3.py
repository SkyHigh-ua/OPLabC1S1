from math import pi, log, sin
acur = int( input( "Введіть точність ε = " ) )
n = int( input( "Введіть точність обчислень = " ) )
sumfx = 0
h = pi / n
i = 1
while i <= n:
    x = i * h - h / 2
    fx = log( 2 + sin(x) )
    sumfx += fx
    i += 1
result = h * sumfx
print( "Результат =", round( result, acur ) )
