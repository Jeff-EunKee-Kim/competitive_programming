import math

n = int(input())

# Proof: show that the minimum section and maximum section should have a difference less than 2

for _ in range(n):
    a, b = map(int, input().split())
    q = b // a
    r = b % a 
    print((q**2) * (a - r) + ((q+1)**2)) * r
