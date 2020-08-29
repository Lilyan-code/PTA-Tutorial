n = int(input())
l = []
sum = 0
for i in range(n):
    s = input().split()
    l1 = []
    for x in s:
        l1.append(int(x))
        sum += int(x)
    l.append(l1)
tmp = 0
for i in range(n):
    tmp += l[i][n - 1]
    tmp += l[n - 1][i]
for i in range(n):
    for j in range(n):
        if i + j == n - 1:
            tmp += l[i][j]
tmp = tmp - l[0][n - 1] - l[n - 1][0] - l[n - 1][n - 1]
print(sum - tmp)
