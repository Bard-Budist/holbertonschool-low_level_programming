#!/usr/bin/python3
"""
    Perimeter if island
"""


def island_perimeter(grid):
    """
        Function found Island Perimeter
    """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                if (grid[i][j + 1] == 0 or grid[i][j + 1] is None):
                    count = count + 1
                if (grid[i][j - 1] == 0 or grid[i][j - 1] is None):
                    count = count + 1
                if (grid[i + 1][j] == 0 or grid[i + 1][j] is None):
                    count = count + 1
                if (grid[i - 1][j] == 0 or grid[i - 1][j] is None):
                    count = count + 1
    return count
