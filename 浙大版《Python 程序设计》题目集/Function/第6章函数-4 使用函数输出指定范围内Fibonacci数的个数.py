def fib(n):
    f1 = 0
    f2 = 1
    if (n == 0):
        return f1
    if (n == 1):
        return f2
    i = 2
    while i <= n + 1:
        f1, f2 = f2, f1 + f2
        i += 1
    return f2

def PrintFN(m, n):
    ans = []
    while m <= n:
        for i in range(1, 26):
            if m == fib(i):
                ans.append(m)
        m += 1
    return ans
        
            