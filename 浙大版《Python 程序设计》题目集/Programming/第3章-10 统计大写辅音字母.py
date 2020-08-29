s = input()
cnt = 0
for i in s:
    if 'A' <= i <= 'Z':
        if i != 'A' and i != 'E' and i != 'I' and i != 'O' and i != 'U':
            cnt += 1
print(cnt)