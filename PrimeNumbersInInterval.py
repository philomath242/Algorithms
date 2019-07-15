import math

def primetest(num):                                           # function to test if a number is prime or not
    for x in range(2, math.floor(math.sqrt(num)) + 1):       #  this is the fastest algorithm where sqrt()
        if (num % x) == 0:                                   # is used, faster than num//2 and certainly from num
            return False
            break
    return True


def primes_in_range(lowerlimit , upperlimit):
    count = 0
    for y in range(lowerlimit, upperlimit):
        if primetest(y):
            count += 1
    print(f'There are {count} prime numbers between {lowerlimit} and {upperlimit}')


intervalStart = 1
intervalEnd = 1000

for _ in range(200):
    primes_in_range(intervalStart, intervalEnd)
    intervalStart += 1000
    intervalEnd += 1000


