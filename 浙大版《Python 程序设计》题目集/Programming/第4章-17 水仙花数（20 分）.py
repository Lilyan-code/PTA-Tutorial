def judge(x, n):
    l = []
    tmp = x
    while x > 0:
        l.append(x % 10)
        x //= 10
    res = 0
    for i in l:
        res += (i ** n)
    return res == tmp


n = int(input())
if n == 3:
    for i in range(100, 1000):
        if judge(i, n):
            print('%d' % (i))
elif n == 4:
    for i in range(1000, 10000):
        if judge(i, n):
            print('%d' % (i))
elif n == 5:
    for i in range(10000, 100000):
        if judge(i, n):
            print('%d' % (i))