s = input()
a, b = input().split()
l = []
l.append(s)
for i in range(len(s)):
    if (l[0][len(s) - i - 1] == a):
        print('%d %c' % (len(s) - i - 1, a))
    elif(l[0][len(s) - i - 1] == b):
        print('%d %c' % (len(s) - i - 1, b))