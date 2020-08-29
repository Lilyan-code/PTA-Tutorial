eps = float(input())
l = []
l.append(1.0)
ans = l[0]
tmp = 1
i = 1
while True:
    tmp *= i
    ans += 1 / tmp
    l.append(ans)
    if l[i] - l[i - 1] < eps:
        print('%.6f' % (ans))
        break
    i += 1