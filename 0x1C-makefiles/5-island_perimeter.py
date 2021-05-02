#!/usr/bin/python3
def island_perimeter(grid):
    endrow = len(grid) - 1
    endcol = len(grid[0]) - 1
    west_coast = 0
    east_coast = 0
    north_coast = 0
    south_coast = 0
    for i in range(1, endrow):
        for j in range(1, endcol):
            if grid[i][j] == 1 and grid[i - 1][j] == 0:
                west_coast += 1
            if grid[i][j] == 1 and grid[i + 1][j] == 0:
                east_coast += 1
            if grid[i][j] == 1 and grid[i][j - 1] == 0:
                north_coast += 1
            if grid[i][j] == 1 and grid[i][j + 1] == 0:
                south_coast += 1
    perimeter = west_coast + east_coast + north_coast + south_coast
    return perimeter
