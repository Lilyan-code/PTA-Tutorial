inputs = input().split(' ')

m, n = int(inputs[0]), int(inputs[1])
l = []
for i in range(m):
	res = []
	inputs = input().split(' ')
	for j in range(n):
		res.append(int(inputs[j]))
	l.append(res)

# print(l)
result = []
count = 0
for i in range(1, m - 1):
	for j in range(1, n - 1):
		if (l[i][j] > l[i-1][j]) and (l[i][j] > l[i][j+1]) and (l[i][j] > l[i][j-1]) and (l[i][j] > l[i+1][j]):
			result.append(l[i][j])
			result.append(i+1)
			result.append(j+1)
			count += 1

# print(result)
# print('count = {}'.format(count))

if count == 0:
	print('None {} {}'.format(m, n))
else:
	for i in range(len(result)):
		if (i + 1) % 3 == 0:
			print(result[i])
		else:
			print(result[i], end=' ')


