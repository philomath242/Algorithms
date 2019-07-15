import time

def check(num):
    temp = num
    prod = 1
    count = 0
    while temp//10 != 0:
        for i in str(temp):
            prod = prod*int(i)
        temp = prod
        prod = 1
        count += 1
    return count

x = 1
max_steps = 1

while 1:
    steps = check(x)
    if steps > max_steps:
        print(x, end =" ")
        print("-------", end = " ")
        print(steps, end = " ")
        print(time.process_time())
        max_steps = steps
    x += 1





