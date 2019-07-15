def recursive_multiplication(x , y):
    if y == 0:
        return 0
    mid = recursive_multiplication(x, y//2)
    if y % 2 == 0:
        return 2*mid
    else:
        return x + (2*mid)


print(recursive_multiplication(11,13))

