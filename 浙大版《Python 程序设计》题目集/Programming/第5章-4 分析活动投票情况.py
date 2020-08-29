inputs = input().split(',')
res = []
for i in range(len(inputs)):
    res.append(int(inputs[i]))

result = []
for i in range(6, 11):
    if i not in res:
        result.append(i)

for i in range(len(result) - 1):
    print(result[i], end=' ')
print(result[len(result)-1])