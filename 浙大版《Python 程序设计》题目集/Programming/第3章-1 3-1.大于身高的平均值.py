s = input().split(' ')
l = []
length = len(s)
sum = 0
for i in range(length):
    l.append(int(s[i]))
    sum += int(s[i])
avg = sum / length
for i in range(len(l)):
    if l[i] > avg:
        print(l[i], end = ' ')