#!/usr/bin/python3
'''This script finds the perimeter of an island as passed in'''


def island_perimeter(grid):
    '''This function accepts grid and returns the perimeter'''
    lrow = len(grid)
    lcol = len(grid[0])
    north = 0
    east = 0
    south = 0
    west = 0
    if grid is None:
        return 0
    else:
        for i in range(0, lrow):
            for j in range(0, lcol):
                if grid[i][j] == 1 and (j - 1 < 0 or grid[i][j - 1] == 0):
                    north += 1
                if grid[i][j] == 1 and (i + 1 >= lrow or grid[i + 1][j] == 0):
                    east += 1
                if grid[i][j] == 1 and (j + 1 >= lcol or grid[i][j + 1] == 0):
                    south += 1
                if grid[i][j] == 1 and (i - 1 < 0 or grid[i - 1][j] == 0):
                    west += 1
    return north + east + south + west
