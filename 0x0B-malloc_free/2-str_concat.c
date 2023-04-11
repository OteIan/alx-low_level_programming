#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int s1len = 0;
	int s2len = 0;
	int len1, len2, j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len1 = 0;
	while (s1[len1] != '\0')
		s1len++;

	len2 = 0;
	while (s2[len2] != '\0')
		s2len++;

	new = malloc(sizeof(char) * (s1len + s2len + 1));

	if (new == NULL)
		return (NULL);

	for (j = 0 ; s1[j] != '\0' ; j++)
		new[j] = s1[j];

	for (j = 0 ; s2[j] ; j++)
		new[s1len + j] = s2[j];

	new[s1len + s2len] = '\0';
	return (new);
}
