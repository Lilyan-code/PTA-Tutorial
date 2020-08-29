def fact(num):
    res = []
    sum = 0
    for i in range(1, num // 2 + 1):
        if num % i == 0:
            res.append(i)
            sum += i
    return (res, sum)

def judge(num):
    res, sum = fact(num)
    if sum == num:
        return (True, res)
    return (False, res)


inputs = input().split(' ')
m, n = int(inputs[0]), int(inputs[1])

count = 0

result = ['6 = 1 + 2 + 3',
                       '28 = 1 + 2 + 4 + 7 + 14',
                       '496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248',
                       '8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064']

for i in range(m, n+1):
    if i == 6:
        count += 1
        print(result[0])
    elif i == 28:
        count += 1
        print(result[1])
    elif i == 496:
        count += 1
        print(result[2])
    elif i == 8128:
        count += 1
        print(result[3])


if count == 0:
    print('None')