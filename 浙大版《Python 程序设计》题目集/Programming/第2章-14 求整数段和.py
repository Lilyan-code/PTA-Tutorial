a, b = input().split(' ')
a = int(a)
b = int(b)
cnt = 0
sum = 0
for i in range(a, b + 1):
    print('%5d' % (i), end = '')
    cnt += 1
    sum += i
    if(cnt % 5 == 0):
        print()
if (cnt % 5 != 0):
    print()
print('Sum = %d' % (sum))