def f(x):
    if x != 0:
        return 1 / x
    return 0

x = float(input())
print("f({0:.1f}) = {1:.1f}".format(x, f(x)))