for i in range (1000, 10000):
    i1 = i % 10
    i2 = i % 100 // 10
    i3 = i // 100 % 10
    i4 = i // 1000
    if i1==i4 and i2==i3:
        print(i)
    else:
        continue
