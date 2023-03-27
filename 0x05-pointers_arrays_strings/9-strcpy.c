#include "main.h"

/**
 * _strcpy - copies and pastes the string pointed to
 * @dest: where to paste the string
 * @src: where to copy the string
 * Return: always dest
 */

char *_strcpy(char *dest, char *src)
{
	char i = *src;

	*dest = i;
	return (*dest);
}
