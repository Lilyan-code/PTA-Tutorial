n = int(input())
l = []
num = [7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2]
d = {0: '1', 1: '0', 2: 'X', 3: '9', 4: '8', 5: '7', 6: '6', 7: '5', 8: '4', 9: '3', 10: '2'}
for i in range(n):
    s = input()
    l.append(s)
cnt = 0
res = 0
while cnt < n:
    sum = 0
    flag = True
    for i in range(17):
        if (l[cnt][i] >= '0' and l[cnt][i] <= '9'):
            sum += (num[i] * int(l[cnt][i]))
        else:
            flag = False
    ans = sum % 11
    if d[ans] == l[cnt][17] and flag:
        res += 1
    else:
        print(l[cnt])
    cnt += 1
if res == n:
    print('All passed')
