s = input()
ans = ""
for i in s:
    if i >= '0' and i <= '9':
        ans += i
print(int(ans))