s = input()
l = []
for x in s:
    if 'A' <= x <= 'Z':
        l.append(x)
ans = []
for x in l:
    if x not in ans:
        ans.append(x)
if (len(ans) > 0):
    for i in range(len(ans)):
        print(ans[i], end = '')
else:
    print('Not Found')