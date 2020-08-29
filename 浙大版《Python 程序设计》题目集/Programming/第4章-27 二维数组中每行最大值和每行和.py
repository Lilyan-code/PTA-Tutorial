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
        tmp.append(max(tmp))
        tmp.append(sum)
        result.append(tmp)
        tmp = []
        sum = 0
# print(result)

for i in range(3):
    for j in range(4):
        print('{:>4d}'.format(result[i][j]),end='')
    print('{:>4d}'.format(result[i][4]))