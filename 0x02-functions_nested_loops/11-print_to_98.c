#include "main.h"

/**
 * print_to_98 - print number to 98
 *
 * @n: integer to be worked on
 *
 * Return: numbers in order
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}

	else if (n < 0)
	{
		for (i = n ; i > 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i <= 98 && i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else
		printf("98");

	return (0);
}
