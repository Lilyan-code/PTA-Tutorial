n = int(input())
print("{0:.3f}".format(1 + sum([i / (2 * i - 1) if i % 2 == 1 else -i / (2 * i - 1) for i in range(2, n + 1)])))