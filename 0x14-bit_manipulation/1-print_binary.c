#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: decimal number
 *
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	int leading = 1; /* Flag to ignore leading zeros */
	unsigned long int pre = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (pre > 0)
	{
		if (n & pre)
		{
			_putchar('1');
			leading = 0;
		}
		else if (!leading)
			_putchar('0');

		pre >>= 1;
	}
}
