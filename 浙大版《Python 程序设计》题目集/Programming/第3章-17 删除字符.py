s = input()
c = input()
s = s.strip()
c = c.strip()
ans = ""
for i in s:
    if (c.lower() == i or c.upper() == i):
        continue
    else:
        ans += i
print('result: %s' % (ans))