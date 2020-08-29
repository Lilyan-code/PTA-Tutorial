s = input().split(' ')
n = int(s[0])
l = []
count = {}
for i in range(1, n + 1):
    l.append(int(s[i]))
    count[int(s[i])] = 0
length = len(l)

for i in range(length):
    count[l[i]] += 1
max = -999999999
index = -999999999
ans = list(count.items())
for i in range(len(ans)):
    if (ans[i][1] > max):
        max = ans[i][1]
        index = ans[i][0]
print('%d %d' % (index, max))

