#!/usr/bin/python3
def island_perimeter(grid):
    width = []
    for x in grid:
        width.append(sum(x))
    w = max(width)
    height = []
    for x in range(len(grid[0])):
        h = 0
        for y in range(len(grid)):
            h = h + grid[y][x]
        height.append(h)
    #print("width es ", width)
    #print("height es ", height)
    h = max(height)
    per = 2 * (h + w)
    return per
