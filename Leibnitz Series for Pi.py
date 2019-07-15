 # integral of arctan(x) from 0 to 1 is one fourth of pi
 # Leibnitz formulated a series based on this that
 # 1 - 1/3 + 1/5 - 1/7 + 1/11 - 1/13 + .........    should also value to same
 # so here we have python program to calculate the sum given the number of terms


def pi_by_leibnitzseries(n):
    count = 1
    sign = 1          # sign takes care of the oscillating manner of sign of each term
    value = 0       # value actually stores the sum as the iteration goes
    denominator = 1
    for _ in range(n):
        if count % 2 == 1:
            value += (sign/denominator)
        else:     # sign changes on even terms
            sign = -1
            value += (sign/denominator)
        count += 1
        sign = 1
        denominator += 2    # since the numbers are going odd, we increment them by 2
    return value



no_of_terms = int(input('Enter the number of terms    '))
print(4*pi_by_leibnitzseries(no_of_terms))
