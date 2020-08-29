def init(list):
    list.append(1)
    list.append(1)
    for i in range(3, 47):
        list.append(list[i - 1] + list[i - 2])
    return list

n = int(input())
l = [0]
l = init(l)
if n < 1:
    print('Invalid.')
else:
    for i in range(1, n + 1):
        if i % 5 != 0:
            if i == n:
                print('%11d' % (l[i]))
            else:
                print('%11d' % (l[i]), end = '')
        elif i % 5 == 0:
            print('%11d' % (l[i]))