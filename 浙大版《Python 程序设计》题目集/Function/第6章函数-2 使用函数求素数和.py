from math import sqrt
def prime(p):
    if p == 0 or p == 1:
        return False
    i = 2
    while i * i <= p:
        if p % i == 0:
            return False
        i += 1
    return True

def PrimeSum(m, n):
    i = m
    sum = 0
    while i <= n:
        if prime(i):
            sum += i
        i += 1
    return sum
