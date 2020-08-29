n = int(input())
j = 1
k = 2
ans = k / j
if n > 1:
    for i in range(1, n):
        ans += (k + j) / k
        k, j = k + j, k
print('%.2f' % (ans))
