#include "main.h"
#include <stddef.h>

/**
 * _strcpy - copies and pastes the string pointed to
 * @dest: where to paste the string
 * @src: where to copy the string
 * Return: always dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
