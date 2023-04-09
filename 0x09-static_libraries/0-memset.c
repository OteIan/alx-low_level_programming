#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: destination
 * @b: byte used to fill
 * @n: number of bytes of the memory area to be filled
 * Return: always s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
