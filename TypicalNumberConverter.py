def bin_to_dec(num):
    digits = [int(x) for x in str(num)]    # list comprehension
    n = len(digits)
    num = 0
    while n > 0:
        num += (digits[len(digits) - n]*(2**(n-1)))           # observe with mathematical eyes
        n -= 1
    return num


def dec_to_bin(num):
    digits = []
    while num > 0:
        digits.append(num % 2)
        num = num//2
    digits.reverse()
    num = ""
    for i in digits:
        num = num + str(i)         # and that is why python is cool
    return int(num)



print(dec_to_bin(14589))
print(bin_to_dec(11100011111101))
