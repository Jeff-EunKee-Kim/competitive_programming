t = int(input())

for i in range(t): 
    n = int(input())
    names = [input() for _ in range(n)] 

    nameCount = {}
    maxCount = 0
    for name in names: 
        count = set(name)
        count.discard(" ")

        nameCount[name] = len(count)
        if nameCount[name] > maxCount:
            maxCount = nameCount[name]
    
    outputs = []

    for key, value in nameCount.items():
        if value == maxCount:
            outputs.append(key)
    
    outputs.sort() 
    print("Case #" + str(i+1) + ": " + outputs[0])
    # print(f"Case #{i+1}: {outputs[0]}\n")