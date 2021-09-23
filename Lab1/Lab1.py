x1, y1 = map(int, input( 'Введіть координати першої точки: ' ).split())
x2, y2 = map(int, input( 'Введіть координати другої точки: ' ).split())
x = x2 - x1
y = y2 - y1
x **= 2
y **= 2
print( int(x**0.5 + y**0.5) )