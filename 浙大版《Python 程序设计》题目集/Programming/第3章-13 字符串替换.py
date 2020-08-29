d = {}
d['A'] = 'Z'
d['B'] = 'Y'
d['C'] = 'X'
d['D'] = 'W'
d['E'] = 'V'
d['F'] = 'U'
d['G'] = 'T'
d['H'] = 'S'
d['I'] = 'R'
d['J'] = 'Q'
d['K'] = 'P'
d['L'] = 'O'
d['M'] = 'N'
d['N'] = 'M'
d['O'] = 'L'
d['P'] = 'K'
d['Q'] = 'J'
d['R'] = 'I'
d['S'] = 'H'
d['T'] = 'G'
d['U'] = 'F'
d['V'] = 'E'
d['W'] = 'D'
d['X'] = 'C'
d['Y'] = 'B'
d['Z'] = 'A'
s = input()
ans = ""
for i in s:
    if 'A' <= i <= 'Z':
        ans += d[i]
    else:
        ans += i
print(ans)