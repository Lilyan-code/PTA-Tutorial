def count(array, layer):
    sum = 0
    if isinstance(array, int):
        sum += layer
    elif isinstance(array, list):
        for x in array:
            sum += count(x, layer+1)
    return sum

inputs = eval(input())
layer = 0
print(count(inputs, layer))