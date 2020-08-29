s = input()
l = []
for i in s:
    l.append(i)
ans = (list(set(l)))
ans.sort()
for i in range(len(ans)):
    print(ans[i], end = '')