# 接收初始输入st
st = input()

# 建立空字符串s储存符合范围的字符
s = ''

# 截取st井号#前的部分录入s
for i in st:
    if i == '#':
        break
    s += i

# 定义空字符串c储存合法字符，定义空字符串a储存负号‘-’
c, a = '', ''

# 定义negative来标志合法字符前是否存在负号‘-’
negative = True

# 遍历s
# 在合法字符前存在负号则储存进a
# i为合法字符则储存进c（由于不分大小写，我们需要将小写a~f转换为大写然后存储）
for i in s:
    if i == '-' and negative:
        a = '-'
        negative = False
    if '0' <= i <= '9' or 'A' <= i <= 'F':
        c += i
        negative = False
    if 'a' <= i <= 'f':
        c += i.upper()
        negative = False

# 判断c中是否存在合法字符，存在则按照约定规则打印，不存在则输出0
if c != '':
    print('{0}{1}'.format(a, int(c, 16)))
else:
    print(0)