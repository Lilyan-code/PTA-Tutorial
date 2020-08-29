input1 = input().split(' ')
input2 = input().split(' ')
l1 = []
l2 = []
for i in range(1, len(input1)):
    l1.append(int(input1[i]))

for i in range(1, len(input2)):
    l2.append(int(input2[i]))

result = []
for i in range(len(l1)):
    if l1[i] not in l2:
        if l1[i] not in result:
            result.append(l1[i])

for i in range(len(l2)):
    if l2[i] not in l1:
        if l2[i] not in result:
            result.append(l2[i])

for i in range(len(result) - 1):
    print(result[i], end=' ')
print(result[len(result) - 1])