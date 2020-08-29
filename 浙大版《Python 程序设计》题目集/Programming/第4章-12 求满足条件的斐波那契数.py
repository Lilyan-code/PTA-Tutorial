def init(list):
    a = list[0]
    b = list[1]
    for i in range(2, 50):
        list.append(a + b)
        a, b = list[i - 1], list[i]
    return list
n = int(input())
l = []
l.append(1)
l.append(2)
ans = []
ans = init(l)
for x in ans:
    if x > n:
        print('%d' % (x))
        break
