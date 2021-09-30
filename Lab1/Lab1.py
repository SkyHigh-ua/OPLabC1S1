from math import sqrt
x1, y1 = map(float, input( 'Введіть координати першої точки: ' ).split())
x2, y2 = map(float, input( 'Введіть координати другої точки: ' ).split())
result = sqrt( (x2 - x1)**2 + (y2 - y1)**2 )
print( 'Відстань між точками - ', result )