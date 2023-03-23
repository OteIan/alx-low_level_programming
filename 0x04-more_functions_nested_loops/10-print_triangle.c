#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the trangle
 * Return: always null
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j < size ; j++)
			{
				_putchar(32);
			}
			for (j = 1 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
