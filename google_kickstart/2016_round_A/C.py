#  Cost= income1 / (1 + r) + income 2/ (1 + r)2 + ...

t = int(input())

def calculator(r, income):
    ans = 0.0
    power = 1
    for i in range(len(income)-1): 
        ans += income[i+1] / pow((1+r), power)
        power += 1
    return ans

for i in range(t):
    input()
    income = list(map(int, input().split()))

    cost = income[0]
    
    left = -1.0
    right = 1.0
    for _ in range(1000): 
        mid = left + (right-left) / 2
        if (calculator(mid, income) > cost):
            left = mid 
        else: 
            right = mid
    
    print("Case #" + str(i+1) + ": " + str(mid))

