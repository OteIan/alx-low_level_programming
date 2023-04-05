#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;

	for (i = 0 ; i < count ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
