#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input
 * @size: input
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	for (k = 0 ; k < size ; k++)
	{
		i = i + a[k * size + k];
	}

	for (k = size - 1 ; k >= 0 ; k--)
	{
		j += a[k * size + (size - k - 1)];
	}

	printf("%d, %d\n", i, j);
}
