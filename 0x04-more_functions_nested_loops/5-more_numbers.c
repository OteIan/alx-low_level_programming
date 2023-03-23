#include "main.h"

/**
 * more_numbers - pritns numbers from 0 to 14
 * Return: always null
 */

void more_numbers(void)
{
	char i;
	char j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '14' ; j++)
		{
			_putchar(j);
			if (j >= 10)
				_putchar((j % 100) + '0');
		}
		_putchar('\n');
	}
}
