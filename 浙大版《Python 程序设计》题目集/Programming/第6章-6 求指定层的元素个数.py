def count(array, layer, n):
    cnt = 0
    if isinstance(array, int):
        if layer == n:
            cnt += 1
    elif isinstance(array, list):
        for x in array:
            cnt += count(x, layer+1, n)
    return cnt

inputs = eval(input())
n = int(input())
layer = 0
print(count(inputs, layer, n))