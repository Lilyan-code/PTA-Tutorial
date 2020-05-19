def acronym(phrase):
    s = []
    s = phrase.split(' ')
   
    t = []
    for i in range(len(s)):
        if (s[i] != ''):
            t.append(s[i][0:1])
    ans = ''
    for i in range(len(t)):
        ans += t[i].upper()
    return ans