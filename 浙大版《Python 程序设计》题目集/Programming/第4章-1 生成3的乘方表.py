def power(a, b):
    res = 1
    for i in range(b):
        res *= a
    return res
n = int(input())
for i in range(n + 1):
    print('pow(3,%d) = %d' % (i, power(3, i)))