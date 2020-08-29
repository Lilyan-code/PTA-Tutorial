# preference:
import sys
s=sys.stdin.read()
s=s[:s.find("#")]
#构建一个字符串中所有非数字、字母、下划线的字符的集合
t=set([i if i.isalnum()==False and i!='_' else " " for i in s ])
for i in t:
    #将字符串中所有非法字符替换为空格
    s=s.replace(i," ")
#所有字符转小写，并将字符串以空格为分割建立一个列表，每一项为一个小写单词
word=s.lower().split(" ")
dic={}
for i in word:
    #取长度为15的单词
    i=i[:15]
    dic[i]=dic.get(i,0)+1
#由于初始字符串中有多个连续空格，因此split（）时会有空字符串存在，需要删除
del dic[""]
#排序，以词频为主要关键字，字典序为次要关键序，'-'表示降序
result=sorted(dic.items(),key=lambda x:(-x[1],x[0]))
print(len(result))
all=int(0.1*len(result))
for i in range(0,all):
    print(str(result[i][1])+":"+result[i][0])
