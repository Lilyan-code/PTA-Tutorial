n = int(input())
inputs = input().split()
work_age = []
output_work_age = []
res = []
for i in range(len(inputs)):
    work_age.append(int(inputs[i]))

work_age.sort()
dic = {}
count = 0

for i in range(len(work_age)):
    if work_age[i] not in res:
        res.append(work_age[i])

res.sort()

for i in range(len(res)):
    dic[res[i]] = work_age.count(res[i])

for key, value in dic.items():
    print('{}:{}'.format(key, value))

