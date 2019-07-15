 # e^x = 1 + x + x^2/2! + ..........
 # so here we have python program to calculate the approximate value given the number of terms and the power

import math


def e_by_mclaurenseries(x, n):
    count = 0
    value = 0       # value actually stores the sum as the iteration goes
    denominator = math.factorial(0)
    for _ in range(n):
        value += ((x**count)/denominator)
        count += 1
        denominator = math.factorial(count)
    return value



no_of_terms = int(input('Enter the number of terms    '))
power = float(input('What power   '))
print(e_by_mclaurenseries(power, no_of_terms))
