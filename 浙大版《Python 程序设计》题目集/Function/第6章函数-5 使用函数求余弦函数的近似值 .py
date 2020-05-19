def f(n):
    if n == 0 or n == 1:
        return 1
    return f(n - 1) * n 
    
def funcos(eps, x):
    flag = 1
    m = 0
    tmp = x ** m / f(m) 
    ans = 0
    while abs(tmp) > eps:
        ans += tmp * flag
        flag = -flag
        m += 2
        tmp = x ** m / f(m) 
        
    return ans