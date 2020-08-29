m, n = input().split(' ')
m = int(m)
n = int(n)
flag = True
ans = 0
for i in range(m, n + 1):
    ans += i * i
    ans += 1 / i
print('sum = %.6f' % (ans))

