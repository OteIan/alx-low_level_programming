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
	/* Create a mask with the leftmost bit set */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			/* Print "1" if the corresponding bit is set */
			_putchar('1');
			/* Set the flag to ignore the leading zeros */
			leading = 0;
		}
		else if (!leading)
		{
			_putchar('0');
			/**
			 * Print "0" if corresponding bit is not set
			 * and leading flag is cleared
			 */
		}
		mask >>= 1;/* Shift the mask to the right by 1 bit */
	}
}
