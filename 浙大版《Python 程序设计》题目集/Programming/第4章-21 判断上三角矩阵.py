t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    l = []
    for i in range(n):
        s = input().split()
        l1 = []
        for x in s:
            l1.append(int(x))
        l.append(l1)
    flag = True
    for i in range(n):
        for j in range(n):
            if i < j and l[i][j] != 0:
                flag = False
    if flag:
        print('YES')
    else:
        print('NO')