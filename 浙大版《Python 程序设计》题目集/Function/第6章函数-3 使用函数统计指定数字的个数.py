def CountDigit(number,digit):
    if number < 0:
        number = -number
    ans = 0
    while number > 0:
        t = number % 10
        if t == digit:
            ans += 1
        number = number // 10
    return ans
