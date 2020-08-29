m, n = input().split()
m, n = int(m), int(n)
for i in range(m):
    sum = 0
    s = input().split()
    for x in s:
        sum += int(x)
    print(sum)