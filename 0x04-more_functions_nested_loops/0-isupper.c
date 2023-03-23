#include "main.h"
#include <unistd.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: integer to be workeed on
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		_putchar('1');
	else
		_putchar('0');
	_putchar('\n');
}
