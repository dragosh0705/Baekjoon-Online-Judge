def factorial_recursion(t):
    if t > 1:
        return t * factorial_recursion(t-1)
    else:
        return 1
n, k = map(int, input().split())
n_fac = 0
k_fac = 0
minus_fac = 0
n_fac = factorial_recursion(n)
k_fac = factorial_recursion(k)
minus_fac = factorial_recursion(n - k)
result = n_fac / (k_fac*minus_fac)
print(int(result))
