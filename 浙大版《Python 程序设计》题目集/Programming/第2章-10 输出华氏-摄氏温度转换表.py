lower, upper = input().split(' ')
lower = int(lower)
upper = int(upper)
if (lower > upper or lower > 100 or upper > 100):
    print('Invalid.')
else:
    print('fahr celsius')
    while lower <= upper:
        C = 5 * (lower - 32) / 9
        print('%d%6.1f' % (lower, C))
        lower += 2