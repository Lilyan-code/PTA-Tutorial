s = input()
ans = ''
for i in s:
    if 'A' <= i <= 'Z':
        ans += i.lower()
    elif 'a' <= i <= 'z':
        ans += i.upper()
    elif i == '#':
        break
    else:
        ans += i
print(ans)