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
	int i;

	if (src == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
