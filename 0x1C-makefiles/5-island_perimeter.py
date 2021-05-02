#!/usr/bin/python3
""" Find the island perimeter """


def island_perimeter(grid):
    """island_perimeter(grid):

    The grid contains island with no lake, but possibly has bay.
    It is considered island beause it is not attaching the border.
    endrow: the end of row, should be less than 100
    endcol: the end of column, should be less than 100
    west_coast: length count of the direction facing coast
    east_coast: length count of the direction facing coast
    north_coast: length count of the direction facing coast
    south_coast: length count of the direction facing coast
    return: return perimeter
    """

    endrow = len(grid) - 1
    endcol = len(grid[0]) - 1
    west_coast = 0
    east_coast = 0
    north_coast = 0
    south_coast = 0
    if grid is None:
        return 0
    else:
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