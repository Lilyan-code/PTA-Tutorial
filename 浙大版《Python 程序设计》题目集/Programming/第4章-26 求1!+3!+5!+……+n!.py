inputs = input().split()
n = int(inputs[0])

sum = 0
for i in range(1, n + 1, 2):
    res = 1
    for j in range(1, i + 1):
        res *= j
    sum += res

print('n={},s={}'.format(n, sum))