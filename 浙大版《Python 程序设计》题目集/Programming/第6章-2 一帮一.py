n = int(input())
data = []
woman = []
man = []
for i in range(n):
    inputs = input().split(' ')
    data.append(inputs[1])
    if inputs[0] == '0':
        woman.append(inputs[1])
    else:
        man.append(inputs[1])

for i in range(int(n / 2)):
    if data[i] in woman:
        j = woman.index(data[i])
        print('{} {}'.format(data[i], man[-j - 1]))
    else:
        j = man.index(data[i])
        print('{} {}'.format(data[i], woman[-j - 1]))
