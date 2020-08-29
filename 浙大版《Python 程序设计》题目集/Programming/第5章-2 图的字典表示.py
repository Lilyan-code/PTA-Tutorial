n = int(input())
edge = 0#边数
length = 0#边总长
for i in range(0, n):
    s = input()
    dic = eval(s)
    e = dic[s[2]]#邻接边字典
    edge += len(e)
    for j in e:
        length += e[j]
print("{0:d} {1:d} {2:d}".format(n, edge, length))
