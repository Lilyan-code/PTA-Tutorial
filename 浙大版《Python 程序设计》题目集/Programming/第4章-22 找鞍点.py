n = int(input())
l = []
for i in range(n):
    tmp = []
    s = input().split()
    for j in range(n):
        tmp.append(int(s[j]))
    l.append(tmp)
anscolum = -1
ansrow = -1
tmpcolum = -1
tmprow = -1
flag = False
for i in range(n):
    maxr = -99999999
    minc = 99999999
    for j in range(n):
        if l[i][j] > maxr:
            maxr = l[i][j]
            tmprow = i
            tmpcolum = j
    for k in range(n):
        if l[k][tmpcolum] < minc:
            minc = l[k][tmpcolum]
            ansrow = k
    if tmprow == ansrow:
        anscolum = tmpcolum
        flag = True
        break
            

if not flag:
    print('NONE')
else:
    print('%d %d' % (ansrow, anscolum))