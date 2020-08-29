s = input()
l = []
for x in s:
    l.append(x)
i =0
j = len(s) - 1
flag = True
while i < j:
    if l[i] != l[j]:
        flag = False
        break
    i += 1
    j -= 1
if flag:
    print(s)
    print('Yes')
else:
    print(s)
    print('No')