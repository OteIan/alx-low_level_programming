#include "main.h"

/**
 * _strlen_recursion - return the lenght of a string
 * @s: function
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s);
	}
}
