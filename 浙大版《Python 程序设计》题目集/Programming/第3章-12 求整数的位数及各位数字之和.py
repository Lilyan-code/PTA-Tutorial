sum = 0
s = input()
for i in s:
    if ('0' <= i <= '9'):
        sum += int(i)
print('%d %d' % (len(s), sum))