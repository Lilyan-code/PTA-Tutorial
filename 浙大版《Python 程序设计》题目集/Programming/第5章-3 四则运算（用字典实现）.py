n = int(input())
oper = str(input())
m = int(input())

# print(m, oper, n)

if m == 0 and oper == '/':
    print('divided by zero')
else:
    if oper == '+':
        print('{:.2f}'.format(m + n))
    elif oper == '-':
        print('{:.2f}'.format(n - m))
    elif oper == '*':
        print('{:.2f}'.format(n * m))
    elif oper == '/':
        print('{:.2f}'.format(n / m))