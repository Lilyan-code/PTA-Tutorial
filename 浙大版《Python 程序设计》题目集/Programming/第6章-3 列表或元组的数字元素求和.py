inputs = eval(input())
# print(inputs)
sum = 0
for i in range(len(inputs)):
    if isinstance(inputs[i], int):
        sum += int(inputs[i])
    elif isinstance(inputs[i], list):
        for j in range(len(inputs[i])):
            if isinstance(inputs[i][j], int):
                sum += int(inputs[i][j])
    elif isinstance(inputs[i], tuple):
        for j in range(len(inputs[i])):
            if isinstance(inputs[i][j], int):
                sum += int(inputs[i][j])
    else:
        continue
print(sum)