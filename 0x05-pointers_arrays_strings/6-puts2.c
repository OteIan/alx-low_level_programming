#include "main.h"

/**
 * puts2 - prints the even character
 * @str: string to be worked on
 * Return: always null
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
