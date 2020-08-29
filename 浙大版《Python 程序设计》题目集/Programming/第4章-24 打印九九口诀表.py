def judge(x):
    l = []
    tmp = x
    l.append(tmp // 10000)
    l.append(tmp % 10000)
    l.append(tmp // 1000)
    l.append(tmp % 1000)
    l.append(tmp // 100)
    l.append(tmp % 100)
    l.append(tmp // 10)
    l.append(tmp % 10)
    

    if l[0] * l[1] + l[2] * l[3] + l[4] * l[5] + l[6] * l[7] == x:
        # print(l)
        return True
    return False
for i in range(10000, 100000):
    if judge(i):
        print('%d' % i, end = ' ')
