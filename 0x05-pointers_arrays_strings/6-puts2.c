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
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
