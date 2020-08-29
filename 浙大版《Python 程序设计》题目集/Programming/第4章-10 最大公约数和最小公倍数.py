def gcd(a ,b):
    if b == 0:
        return a
    return gcd(b, a % b)
def lcm(a, b):
    return (a * b) / gcd(a, b)
m, n = input().split()
m = int(m)
n = int(n)
print('%d %d' % (gcd(m, n), lcm(m, n)))