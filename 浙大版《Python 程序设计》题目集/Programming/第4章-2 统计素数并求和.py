def is_Prime(n):
    if n == 1:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True
m, n = input().split()
m = int(m)
n = int(n)

sum = 0
cnt = 0
for i in range(m, n + 1):
    if is_Prime(i):
        cnt += 1
        sum += i
print('%d %d' % (cnt, sum))