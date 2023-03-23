#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ is printed
 * Return: always null
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar(47);
			_putchar('\n');
			_putchar(32);
		}
		putchar('\n');
	}
	else
		_putchar('\n');
}
