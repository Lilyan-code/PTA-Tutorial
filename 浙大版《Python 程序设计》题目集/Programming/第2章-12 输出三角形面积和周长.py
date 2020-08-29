from math import sqrt
a, b, c = input().split(' ')
a = int(a)
b = int(b)
c = int(c)
s = (a + b + c) / 2
if (a + b > c and a + c > b and b + c > a):
    area = sqrt(s * (s - a) * (s - b) * (s - c))
    perimeter = a + b + c
    print('area = %.2f; perimeter = %.2f' % (area, perimeter))
else:
    print('These sides do not correspond to a valid triangle')

