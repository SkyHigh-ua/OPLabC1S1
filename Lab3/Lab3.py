from math import pi, log, sin
n = int( input( "Введіть точність ε = " ) )
sumfx = 0
h = pi / n
for i in range(1, n+1):
    x = i * h - h / 2
    fx = log( 2 + sin(x) )
    six= sin(x)
    sumfx += fx
result = h * sumfx
print( result )
