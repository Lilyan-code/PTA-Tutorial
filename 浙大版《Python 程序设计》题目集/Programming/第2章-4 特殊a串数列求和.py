def fn(a, b) :
    sum = 0
    i = 0
    t = a
    while (i < b):
        sum += a
        a = a * 10 + t
        i += 1
    return sum

a,b=input().split()
s=fn(int(a),int(b))
print("s = {0}".format(s))