inputs = input().split(' ')
res = []
for i in range(len(inputs)):
    res.append(int(inputs[i]))

tmp = []
result = []
sum = 0
for i in range(len(res)):
    tmp.append(res[i])
    sum += res[i]
    if (i + 1) % 3 == 0:
        # tmp.append(max(tmp))
        # tmp.append(sum)
        result.append(tmp)
        tmp = []
        sum = 0

for i in range(3):
    for j in range(2):
        print('{:>4d}'.format(result[j][i]),end='')
    print('{:>4d}'.format(result[2][i]))