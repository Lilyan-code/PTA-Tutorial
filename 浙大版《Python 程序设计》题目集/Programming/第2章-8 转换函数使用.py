def power(m, n):
    res = 1
    for i in range(n):
        res *= m
    return res

a, b = input().split(',')
a = int(a)
b = int(b)
cnt = 0
ans = 0
while a > 0:
    tmp = a % 10
    ans = ans +  (tmp * power(b, cnt))
    cnt += 1
    a //= 10
print(ans)