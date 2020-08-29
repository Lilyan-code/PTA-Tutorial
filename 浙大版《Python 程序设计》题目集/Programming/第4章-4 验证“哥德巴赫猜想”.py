import math
def is_Prime(n):
    if n<= 1:
        return False
    for i in range(2,int(math.sqrt(n))+1):
        if n % i ==0:
            return False
    return True


n = int(input())

for i in range(2, n // 2 + 1):
    j = n - i
    if is_Prime(i) and is_Prime(j):
        print('%d = %d + %d' % (n, i, j))
        break