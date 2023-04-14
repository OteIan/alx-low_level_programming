#include "main.h"

/**
 * array_range - creates array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *z;
	int i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	z = malloc(sizeof(int) * j);

	if (z == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++)
		z[i] = min++;

	return (z);
}
