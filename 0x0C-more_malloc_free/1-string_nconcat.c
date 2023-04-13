#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number of bytes to be allocated
 * Return: point to a newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		z = malloc(sizeof(char) * (x + n + 1));
	else
		z = malloc(sizeof(char) * (x + y + 1));

	if (!z)
		return (NULL);

	while (i < x)
	{
		z[i] = s1[i];
		i++;
	}

	while (n < y && i < (x + n))
		z[i++] = s2[j++];

	z[i] = '\0';

	return (z);
}
