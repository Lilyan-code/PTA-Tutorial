inputs = input().split()
n = int(inputs[0])

res = 65

for i in range(n):
    for j in range(n - i):
        print(chr(res), end=' ')
        res += 1
    # print(chr(res))
    # res += 1
    print()