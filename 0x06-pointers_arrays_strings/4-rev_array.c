#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array to be worked on
 * @n: number of integers
 * Return: always 0
 */

void reverse_array(int *a, int n);
{
	int i;
	int j;

	for (i = 0 ; i < n-- ; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
