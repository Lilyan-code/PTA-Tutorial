n = int(input())
sum = 1
f = 1
for i in range(1, n + 1):
    f *= i
    sum += 1 / f
print('%.8f' % sum)