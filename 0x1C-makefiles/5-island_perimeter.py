#!/usr/bin/python3
"""
5-island_perimeter.py
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimeter += 4  # Each land cell contributes 4 to perimeter

                # Check adjacent cells to subtract the shared sides
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract top side shared with upper cell
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract left side shared with left cell

    return perimeter


# Test case
if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
