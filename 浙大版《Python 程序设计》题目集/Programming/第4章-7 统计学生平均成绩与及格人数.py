n = int(input())
if(n==0):
    print('average = 0.0')
    print('count = 0')
else:
    l = []
    s = input().split()
    for i in s:
        l.append(int(i))
    cnt = 0
    sum = 0
    for i in range(n):
        if l[i] >= 60:
            cnt += 1
        sum += l[i]
    print('average = %.1f' % (sum / n))
    print('count = %d' % (cnt))