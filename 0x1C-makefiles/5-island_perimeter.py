#!/usr/bin/python3
def island_perimeter(grid):
    width = []
    height = []
    for x in range(len(grid)):
        w = 0
        for y in range(len(grid[0])):
            if grid[x][y] is 1:
                w = w + grid[x][y]
        width.append(w)
    for x in range(len(grid[0])):
        h = 0
        for y in range(len(grid)):
            if grid[y][x] is 1:
                h = h + grid[y][x]
        height.append(h)
    h = max(height)
    w = max(width)
    per = 2 * (h + w)
    return per
