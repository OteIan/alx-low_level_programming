#include "main.h"

/**
 * _islower - checks for the lower case character
 * main - main function
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 97 ; c <= 122)
		_putchar('1');
	else 
		_putchar('0');
	_putchar('\n');
}
