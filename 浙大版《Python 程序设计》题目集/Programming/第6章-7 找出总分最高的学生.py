n = int(input())
result = []
for i in range(n):
    res = []
    inputs = input().split(' ')
    res.append(int(inputs[2]) + int(inputs[3]) + int(inputs[4]))
    res.append(inputs[1])
    res.append(inputs[0])
    result.append(res)

# print(result)
result.sort(reverse=True)
# print(result)
print('{} {} {}'.format(result[0][1], result[0][2], result[0][0]))

