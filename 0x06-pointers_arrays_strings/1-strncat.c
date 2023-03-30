#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated2
 * @src: string to be concatenated
 * @n: number of bytes
 * Return: always dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		destlen++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		srclen++;
	}

	for (i = 0 ; i < n ; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);

}
