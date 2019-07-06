#!/usr/bin/python3
def island_perimeter(grid):
    width = []
    height = []
    for x in grid:
        width.append(sum(x))
    w = max(width)
    for x in range(len(grid[0])):
        h = 0
        for y in range(len(grid)):
            print("grid[y][x] es ", grid[y][x])
            if grid[y][x] is 1:
                h =+ 1
        height.append(h)
    #print("width es ", width)
    #print("height es ", height)
    h = sum(height)
    per = 2 * (h + w)
    return per
