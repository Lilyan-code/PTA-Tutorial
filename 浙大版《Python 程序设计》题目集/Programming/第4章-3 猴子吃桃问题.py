def fun(n):
    if n == 1:
        return 1
    return (fun(n - 1) + 1) * 2
n = int(input())
print(fun(n))