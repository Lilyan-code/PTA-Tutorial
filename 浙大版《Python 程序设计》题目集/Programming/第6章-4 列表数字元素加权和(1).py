# 递归Recursion
def handle(array, layer):
    sum = 0
    if isinstance(array, int):
        sum += array * layer
    elif isinstance(array, list):
        for x in array:
            sum += handle(x, layer + 1)
    return sum


inputs = eval(input())
layer = 0

print(handle(inputs, layer))

# print(inputs)