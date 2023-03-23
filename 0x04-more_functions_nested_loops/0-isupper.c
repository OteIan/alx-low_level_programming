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
	if (c >= 'A' && c <= 'Z')
		return(1);
	else
		return(0);
	_putchar('\n');
}
