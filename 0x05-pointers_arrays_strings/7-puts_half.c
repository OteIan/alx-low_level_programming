#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: always null
 */

void puts_half(char *str)
{
	int i;
	int count = 0;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		count++;
	}
	for (i = 0 ; i <= count ; i++)
	{
		if (count % 2 == 0)
		{
			for (j = count / 2 ; j <= count ; j++)
				_putchar(str[j]);
			_putchar('\n');
		}
		else
		{
			for (j = (count - 1) / 2 ; j <= count ; j++)
				_putchar(str[j]);
			_putchar('\n');
		}
	}
}
