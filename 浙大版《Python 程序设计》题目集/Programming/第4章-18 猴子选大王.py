n = int(input())
l = []
cnt = 1
for i in range(1, n + 1):
    l.append(i)
i = 0
while True:
    if len(l) <= 1:
        print('%d' % l[0])
        break
    if cnt == 3:
        cnt = 1
        l.pop(i)
    i = (i + 1) % len(l)
    cnt += 1