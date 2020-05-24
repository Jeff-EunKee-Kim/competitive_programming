t = int(input())

def inBounds(r, c, grid):
    return r >= 1 and c >= 1 and r < (len(grid)-1) and (c < len(grid)-1)

def isLowest(r, c, grid): 
    return grid[r][c] < grid[r+1][c] and grid[r][c] < grid[r-1][c] and grid[r][c] < grid[r][c+1] and grid[r][c] < grid[r][c-1]

def getMin(grid, r,c, visited): 
    if not inBounds(r, c, grid) or visited[r][c]:
        return 0
    
    visited[r][c] = True
    smallest = min(grid[r+1][c], grid[r-1][c], grid[r][c+1], grid[r][c-1])
    if grid[r][c] < smallest: 
        return smallest
    elif grid[r][c] == smallest:
        if grid[r+1][c] == smallest:
            return getMin(grid, r+1,c,visited)
        elif grid[r-1][c] == smallest:
            return getMin(grid,r-1,c,visited)
        elif grid[r][c-1] == smallest:
            return getMin(grid,r,c-1,visited)
        elif grid[r][c+1] == smallest:
            return getMin(grid,r,c +1 ,visited)
    else: 
        return grid[r][c]

def printGrid(grid):
    for row in grid: 
        print(row)

for i in range(t): 
    a, b = map(int, input().split())
    grid = [[0 for x in range(b)] for y in range(a)]
    for r in range(a): 
        grid[r] = list(map(int, input().split()))
    
    count = 0

    for r in range(len(grid)): 
        for c in range(len(grid[0])):
            if inBounds(r,c,grid):
                visited = [[False for x in range(b)] for y in range(a)]
                minVal = getMin(grid, r,c,visited)
                count += (minVal-grid[r][c])
                if minVal != 0:
                    grid[r][c] = minVal
    
    printGrid(grid)

    print("Case #" + str(i+1) + ": " + str(count))

# 3
# 3 3
# 3 5 5
# 5 4 5
# 5 5 5
# 4 4
# 5 5 5 1
# 5 1 1 5
# 5 1 5 5
# 5 2 5 8
# 4 3
# 2 2 2
# 2 1 2
# 2 1 2
# 2 1 2
# 1
# 3 3
# 3 5 5
# 5 4 5
# 5 5 5
