#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ is printed
 * Return: always null
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (j = 1 ; j <= n ; j++)
			{
				if (j == i)
					_putchar(92);
				else
					_putchar(32);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
