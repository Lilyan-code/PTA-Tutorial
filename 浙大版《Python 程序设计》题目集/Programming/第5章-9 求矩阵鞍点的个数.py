n = int(input())
array = []
for i in range(n):
    res = []
    inputs = input().split()
    for j in range(len(inputs)):
        res.append(int(inputs[j]))
    array.append(res)
count = 0
for i in range(n):
    for j in range(n):
        if array[i][j] == max(array[i]) and array[i][j] == min([x[j] for x in array]):
            count += 1
print(count)