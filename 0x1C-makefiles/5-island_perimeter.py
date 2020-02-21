#!/usr/bin/python3
"""
    Perimeter if island
"""


def island_perimeter(grid):
    """
        Function found Island Perimeter
    """
    count = 0
    if (len(grid) <= 100 and len(grid[0]) <= 100):
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if (grid[i][j] == 1):
                    try:
                        if (grid[i][j + 1] == 0):
                            count += 1
                    except IndexError:
                        count += 1
                    try:
                        if (grid[i][j - 1] == 0):
                            count += 1
                    except IndexError:
                        count += 1
                    try:
                        if (grid[i + 1][j] == 0):
                            count += 1
                    except IndexError:
                        count += 1
                    try:
                        if (grid[i - 1][j] == 0):
                            count += 1
                    except IndexError:
                        count += 1
    return count
