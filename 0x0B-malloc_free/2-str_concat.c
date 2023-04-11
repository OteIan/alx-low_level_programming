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
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	new = malloc(sizeof(char) * (i + j + 1));

	if (new == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i++, j++;
	}

	new[i] = '\0';

	return (new);
}
