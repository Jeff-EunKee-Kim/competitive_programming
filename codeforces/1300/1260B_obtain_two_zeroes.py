n = int(input())

# Proof: x is the number of times you subtracted once to a and 
# y is the number of times you subtracted twice to a
# a - x1 - x2 - ... -2 (y1 + y2 + y3 + ...) = 0
# b - y1 - y2 - ... -2 (x1 + x2 + x3 + ...) = 0
# a - X - 2Y = 0
# b - 2X - Y = 0
# (a+b) = 3 (X + Y)

# Calculate for Y
# b - 2(a-2Y) -Y = 0
# b-2a = 3Y
# Y = (b-2a)/3
# b >= 2a

# Calculate for X
# a >= 2b

for _ in range(n): 
    a, b = map(int, input().split())

    if (a+b) % 3 == 0 and b <= 2*a and a <= 2*b:
        print("YES")
    else:
        print("NO")
