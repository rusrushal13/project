'''
Rushal Verma
Find PI to the Nth Digit based on the Gauss-Legendre Algorithm.
You can more read over Gauss-Legendre Algorithm {https://en.wikipedia.org/wiki/Gauss%E2%80%93Legendre_algorithm}
'''
from __future__ import with_statement
import decimal
def pi_gauss_legendre():
    D = decimal.Decimal
    with decimal.localcontext() as ctx:
        ctx.prec += 2                
        a, b, t, p = 1, 1/D(2).sqrt(), 1/D(4), 1                
        pi = None
        while 1:
            an    = (a + b) / 2
            b     = (a * b).sqrt()
            t    -= p * (a - an) * (a - an)
            a, p  = an, 2*p
            piold = pi
            pi    = (a + b) * (a + b) / (4 * t)
            if pi == piold:  # equal within given precision
                break
    return +pi

n = raw_input("Enter n: ")
decimal.getcontext().prec = int(n)
print pi_gauss_legendre()