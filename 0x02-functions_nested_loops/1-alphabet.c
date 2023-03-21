#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * main - main function
 * Return: always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i + '0');
	_putchar('\n');
	return (0);
}
