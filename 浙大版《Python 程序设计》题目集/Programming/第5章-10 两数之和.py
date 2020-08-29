inputs = input().split(',')
target = int(input())
res = []
for i in range(len(inputs)):
    res.append(int(inputs[i]))
flag = False
dic = {}
for x in res:
    dic[x] = target - x
for key, value in dic.items():
    if key in res and value in res:
        flag = True
        print('{} {}'.format(res.index(key), res.index(value)))
        break
if not flag:
    print('no answer')