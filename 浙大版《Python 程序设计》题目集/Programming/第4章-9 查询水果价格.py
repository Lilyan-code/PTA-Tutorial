# 给定四种水果，分别是苹果（apple）、梨（pear）、桔子（orange）、葡萄（grape），单价分别对应为3.00元/公斤、2.50元/公斤、4.10元/公斤、10.20元/公斤。
s = input().split(' ')
#print(s)
l = []
for x in s:
    l.append(int(x))
#print(l)
cnt = 0
fruit = {}
fruit[1] = 3.00
fruit[2] = 2.50
fruit[3] = 4.10
fruit[4] = 10.20
print('[1] apple')
print('[2] pear')
print('[3] orange')
print('[4] grape')
print('[0] exit')
for i in l:
    if i == 0:
        break
    elif cnt >= 5:
        break
    elif 1 <= i <= 4:
        print('price = %.2f' % (fruit[i]))
    else :
        print('price = 0.00')
    cnt += 1
