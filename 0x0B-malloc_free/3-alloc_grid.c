#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int **new;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	new = malloc(sizeof(int *) * height);

	if (new == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		new[i] = malloc(sizeof(int) * width);

		if (new[i] == NULL)
		{
			for ( ; i >= 0 ; i--)
				free(new[i]);

			free(new);

			return (NULL);
		}
	}

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			new[i][j] = 0;
	}
	return (new);
}
