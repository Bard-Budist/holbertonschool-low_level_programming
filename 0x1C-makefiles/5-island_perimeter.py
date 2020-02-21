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
            if (grid[i][j] == 0):
                try:
                    if (grid[i][j + 1] == 1 and grid[i][j - 1] == 1
                            and grid[i + 1][j] == 1 and grid[i - 1][j] == 1):
                        grid[i][j] = 2
                except IndexError:
                    pass

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                try:
                    if (grid[i][j + 1] == 0 or grid[i][j + 1] is None):
                        count = count + 1
                except IndexError:
                    count = count + 1
                try:
                    if (grid[i][j - 1] == 0 or grid[i][j - 1] is None):
                        count = count + 1
                except IndexError:
                    count = count + 1
                try:
                    if (grid[i + 1][j] == 0 or grid[i + 1][j] is None):
                        count = count + 1
                except IndexError:
                    count = count + 1
                try:
                    if (grid[i - 1][j] == 0 or grid[i - 1][j] is None):
                        count = count + 1
                except IndexError:
                    count = count + 1
    return count
