n = int(input())
if n <= 50 and n >= 0:
    print("cost = {0:.2f}".format(n * 0.53))
elif n > 50:
    cost = 50 * 0.53
    cost += (n - 50) * 0.58
    print("cost = {0:.2f}".format(cost))
elif n < 0:
    print("Invalid Value!")