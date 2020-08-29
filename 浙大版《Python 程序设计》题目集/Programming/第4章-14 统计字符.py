letter, blank, digit, other = 0, 0, 0, 0
s = input()
while True:
    for x in s:
        if x.isalpha():
            letter += 1
        elif x.isdigit():
            digit += 1
        elif x.isspace():
            blank += 1
        else:
            other += 1
    if digit + letter + blank + other >= 10:
        break
    blank += 1
    s = input()

print('letter = %d, blank = %d, digit = %d, other = %d' % (letter, blank, digit, other))