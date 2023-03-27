#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: always null
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (i = count ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
