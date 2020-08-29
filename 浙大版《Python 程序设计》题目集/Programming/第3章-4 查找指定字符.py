aChar = input()
aStr = input()
aStr_len = len(aStr)
if(aStr.find(aChar) == -1): #若待查字符在被查询的字符串中不存在
    print("Not Found")
else:
    aStr = aStr[::-1] #反转字符串，然后输出第一次待查字符的位置即可
    index_aStr = aStr.find(aChar) #查询待查字符在反转后的字符串第一次出现的索引
    print("index = {:d}".format(aStr_len - index_aStr - 1)) # 按照索引aStr_len-index_aStr-1求出待查字符在原字符串中对应的最大下标