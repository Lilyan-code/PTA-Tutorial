dic1 = eval(input())
dic2 = eval(input())
dic3 = {}
# sorted(dic1.keys())
# sorted(dic2.keys())
for key1, value1 in dic1.items():
    for key2, value2 in dic2.items():
        if key1 == key2:
            dic3[key1] = value1 + value2

for key1, value1 in dic1.items():
    if key1 not in dic2.keys():
        dic3[key1] = value1

for key2, value2 in dic2.items():
    if key2 not in dic1.keys():
        dic3[key2] = value2

dic3=dict(sorted(dic3.items(),key=lambda x:x[0] if type(x[0])==int else ord(x[0])))
# print(dic3)
print('{', end='')
count = 0
l = len(dic3)
for key, value in dic3.items():
    if count + 1 == l:
        if isinstance(key, str):
            print('"{}":{}'.format(key, value), end='')
        else:
            print('{}:{}'.format(key, value), end='')
    else:
        if isinstance(key, str):
            print('"{}":{},'.format(key, value), end='')
        else:
            print('{}:{},'.format(key, value), end='')
    count += 1

print('}')