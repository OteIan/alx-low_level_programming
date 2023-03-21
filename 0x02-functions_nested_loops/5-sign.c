#include "main.h"

/**
 * print_sign - prints the sign of the number
 *
 * @n: parameter to be printed
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
