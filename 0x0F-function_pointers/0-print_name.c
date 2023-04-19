#include "functon_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed out
 * @f: pointer to a function that takes a single argument
 * Return: always NULL
 */

void print_name(char *name, void (*f)(char *c))
{
	int i = 0;

	while (name[i] != '\0')
		f(&name[i]);
		i++;

	return (f);
}
