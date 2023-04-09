#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: to Dest
 */

char *_strcat(char *dest, char *src)
{
	int d;
	int s;
	int destlen = 0;
	int srclen = 0;

	for (s = 0 ; src[s] != '\0' ; s++)
	{
		srclen++;
	}
	for (d = 0 ; dest[d] != '\0' ; d++)
	{
		destlen++;
	}
	for (s = 0 ; s <= srclen ; s++)
	{
		dest[destlen + s] = src[s];
	}
	return (dest);
}
