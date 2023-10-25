#!/usr/bin/python3
"""Island perimeter module definition"""


def island_perimeter(grid):
    """Function that returns the perimeter of the island described in 'grid'"""
    length_row = len(grid)
    length_column = len(grid[1])

    assumed_Perimeter = 0
    connections = 0
    actual_Perimeter = 0

    for i in range(0, length_row):
        for j in range(0, length_column):

            if grid[i][j] == 1:
                assumed_Perimeter += 4

                # Top Check
                if i != 0 and grid[i - 1][j] == 1:
                    connections += 2

                # Side check
                if j != 0 and grid[i][j - 1] == 1:
                    connections += 2

    actual_Perimeter = assumed_Perimeter - connections

    return actual_Perimeter
