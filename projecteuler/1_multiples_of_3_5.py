# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

# Find the sum of all the multiples of 3 or 5 below 1000.

# 3 (1 + .... + 333)
# +
# 5 (1 + ... + 199)
# - 15 (1 + .. + 66)

a= 333*334*3/2 + 5*199*200/2 - 15*66*67/2
print(a)