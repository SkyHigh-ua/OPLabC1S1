from math import fabs
x, y = map(float, input( 'Введіть координати точки: ' ).split())
if x >= -1 and y <= 1 and y >= fabs(x):
    print("Точка належить")
else:
    print("Точка не належить")