s = input().split(' ')
l = []
for i in s:
    l.append(i)
l.sort()
print('After sorted:')
for i in range(len(l)):
    print(l[i])