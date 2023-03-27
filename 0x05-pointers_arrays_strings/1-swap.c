#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: always null
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
