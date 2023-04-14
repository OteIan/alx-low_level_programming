#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area to fill
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(size * nmemb);

	if (z == NULL)
		return (NULL);

	_memset(z, 0, nmemb * size);

	return (z);
}
