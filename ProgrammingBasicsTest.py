count = 0

def g(n):
    global count  # to use count as global variable
    count += 1
    print(f' invoked {count}')    # count actually counts number of times the function is invoked
    if n == 0:                    # which is why making it global is necessary
        return 0
    elif n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        return g(n-1) + g(n-2) + g(n-3)



print(g(5))




