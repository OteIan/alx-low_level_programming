#include "main.h"

/**
 * print_line - prints a line of _
 * @n: number of times _ is printed
 * Return: always null
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
			_putchar(95);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
