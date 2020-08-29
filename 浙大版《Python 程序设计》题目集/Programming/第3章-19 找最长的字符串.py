n = int(input())
l = []
for i in range(n):
    s = input()
    l.append(s)
index = -1
max_len = -9999
for i in range(n):
    if (len(l[i]) > max_len):
        max_len = len(l[i])
        index = i

print('The longest is: %s' % (l[index]))