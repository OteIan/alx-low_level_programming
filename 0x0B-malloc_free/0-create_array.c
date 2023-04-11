#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the char
 * @c: character
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size_of(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		str[i] = c;

	return (str);
}