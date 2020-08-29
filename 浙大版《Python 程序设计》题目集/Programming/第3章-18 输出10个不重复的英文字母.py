s = input()
l = []
for i in s:
    if 'a' <= i <= 'z' or 'A' <= i <= 'Z':
        l.append(i)
ans = []
for i in l:
    if (i.upper() not in ans) and (i.lower() not in ans):
        ans.append(i)

if (len(ans) >= 10):
    for i in range(10):
        print(ans[i], end = '')
else:
    print('not found')
