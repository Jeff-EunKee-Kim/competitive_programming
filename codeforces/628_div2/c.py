n = int(input())

tree = [[]]*n
for i in range(n):
    tree[i] = []

for i in range(n-1): 
    a, b = map(int, input().split())
    tree[a-1].append(i)
    tree[b-1].append(i)

label = [-1]*(n-1)
print(tree)
currLabel = 0
for i in range(n-1):
    if len(tree[i]) > 2: 
        for j in tree[i]:
            if currLabel == 3: 
                break
            label[j] = currLabel
            currLabel +=1
        if currLabel == 3:
            break

for i in range(n-1): 
    if label[i] == -1:
        label[i] = currLabel
        currLabel += 1

for i in label:
    print(i)

# "3"
# "1 2"
# "1 3"

# "6"
# "1 2"
# "1 3"
# "2 4"
# "2 5"
# "5 6"

