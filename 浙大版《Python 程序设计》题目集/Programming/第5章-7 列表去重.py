inputs = input()
# print(inputs)
# inputs = inputs.lstrip('[')
# inputs = inputs.rstrip(']')
inputs = inputs[1: len(inputs)-1]
# print(inputs)
inputs = inputs.split(',')

res = []
for i in range(len(inputs)-1):
    res.append(int(inputs[i]))

result = []
for i in range(len(res)):
    if res[i] not in result:
        result.append(res[i])

for i in range(len(result) - 1):
    print(result[i], end=' ')
print(result[len(result) - 1])