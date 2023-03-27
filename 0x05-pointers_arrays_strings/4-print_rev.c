#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: always null
 */

void print_rev(char *s)
{
	int i;

	for (s[i] = '\0' ; i >= 0 ; i--)
	{
		if (s[i] != '\0')
			_putchar(i);
		else
			continue;
	}
	_putchar('\n');
}
