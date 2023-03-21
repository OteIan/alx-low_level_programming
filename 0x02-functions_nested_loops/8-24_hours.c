#include "main.h"

/**
 * jack_bauer - prints every minute of a day
 *
 * Return: minutes of the day
 */

void jack_bauer(void)
{
	int m;
	int h;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar(h + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar('\n');
		}
	}
}
