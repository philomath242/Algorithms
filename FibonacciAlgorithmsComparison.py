fibonacci_list = [0, 1]


def fibo1(n):                # faster method , know why ??
    global fibonacci_list
    for i in range(2, n+1):
        fibonacci_list.append(fibonacci_list[i-1] + fibonacci_list[i-2])
    return fibonacci_list[n-1] + fibonacci_list[n-2]

def fibo2(n):               # usual algorithm, but slower for bigger terms, in fact the slowest
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibo2(n-1) + fibo2(n-2)


n = 35
print(fibo1(n))
print(fibo2(n))


