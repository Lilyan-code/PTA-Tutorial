def fn(a, b) :
    sum = 0
    i = 0
    t = a
    while (i < b):
        sum += a
        a = a * 10 + t
        i += 1
    return sum