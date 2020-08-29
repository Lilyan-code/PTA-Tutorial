s = input()
l = []
s = s.rstrip('0')
for i in s:
    l.append(i)
i = len(l) - 1
while i >= 0:
    print(l[i], end = '')
    i -= 1
