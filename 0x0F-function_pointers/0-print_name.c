#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed out
 * @f: pointer to a function that takes a single argument
 * Return: always NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
