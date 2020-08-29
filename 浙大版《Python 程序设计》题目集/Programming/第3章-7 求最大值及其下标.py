n = int(input())
s = input().split(' ')
l = []
for i in s:
    l.append(int(i))
max = -9999999999
index = -9999999999
for i in range(len(l)):
    if (l[i] > max):
        max = l[i]
        index = i
print('%d %d' % (max, index))