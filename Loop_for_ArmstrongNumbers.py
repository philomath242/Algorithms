def check_armstrong(num):
    n = len(str(num))
    temp = num
    sum = 0

    while temp > 0:
        sum += ((temp % 10)**n)
        temp = temp // 10

    if sum == num:
        print(str(num) + '  is an armstrong number')
        return True



i = 1
count = 0
while 1:
    if(check_armstrong(i)):
        count += 1
        print(count)
    i += 1




