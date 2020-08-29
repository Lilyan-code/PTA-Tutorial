def is_Prime(x):
    if x <= 1:
        return False
    i = 2
    while i * i <= x:
        if x % i == 0:
            return False
        i += 1
    return True


n = int(input())
for i in range(n):
    x = int(input())
    if is_Prime(x):
        print('Yes')
    else:
        print('No')