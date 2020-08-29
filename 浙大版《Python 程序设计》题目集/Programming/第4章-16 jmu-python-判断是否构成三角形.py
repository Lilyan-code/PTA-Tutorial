a, b, c = input().split()
a, b, c = int(a), int(b), int(c)
if a + b > c and a + c > b and b + c > a:
    print('yes')
else:
    print('no')