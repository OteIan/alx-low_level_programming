#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: input
 * @accept: input
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int count = 0;
	int j;

	for (i = 0 ; accept[i] != '\0' ; i++)
		count++;

	for (i = 0 ; s[i] != '\0' ; i++)
		j++;

	int k = j - count;

	return (j);
}
