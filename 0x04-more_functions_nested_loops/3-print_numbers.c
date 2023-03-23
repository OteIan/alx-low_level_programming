#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: always null
 */

void print_numbers(void)
{
	char i;

	for (i = '0' ; i < '10' ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
