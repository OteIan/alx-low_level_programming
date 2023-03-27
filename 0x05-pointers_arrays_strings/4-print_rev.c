#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: always null
 */

void print_rev(char *s)
{
	int i;
	int j;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	for (j = count ; j >= 0 ; --j)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
