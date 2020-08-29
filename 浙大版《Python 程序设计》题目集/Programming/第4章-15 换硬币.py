x = int(input())
one = x // 1
two = x // 2
five = x // 5
fen5 = five
cnt = 0
while fen5 >= 1:
    fen2 = two
    while fen2 >= 1:
        fen1 = one
        while fen1 >= 1:
            if fen5 * 5 + fen2 * 2 + fen1 == x:
                total = fen1 + fen2 + fen5
                print('fen5:%d, fen2:%d, fen1:%d, total:%d' % (fen5, fen2, fen1, total))
                cnt += 1
            fen1 -= 1
        fen2 -= 1
    fen5 -= 1

print('count = %d' % (cnt))