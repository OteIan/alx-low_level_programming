#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to be printed
 * Return: always null
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
		_putchar(s[i]);
	}
	_putchar('\n');
	count--;
	for (i = count ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
