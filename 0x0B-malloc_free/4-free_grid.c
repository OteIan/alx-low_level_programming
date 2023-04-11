#include "main.h"

/**
 * free_grid - frees the grid created previously
 * @grid: the 2d grid
 * @height: height dimension of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
