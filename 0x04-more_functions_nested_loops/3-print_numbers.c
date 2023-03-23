#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: always null
 */

void print_numbers(void)
{
	int i = 0;

	if (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
