inputs = input()
inputs = inputs[1: len(inputs)-1]
inputs = inputs.split(',')
# print(inputs)
res = []
for i in range(len(inputs)):
    res.append(int(inputs[i]))

# print(res)
print(sum(res))