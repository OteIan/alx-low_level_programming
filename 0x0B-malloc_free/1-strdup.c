#include "main.h"

/**
 * _strdup - returns pointer to newly allocated space
 * @str: string too be copied
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *num;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	num = malloc(sizeof(char) * (i + 1));

	if (num == NULL)
		return (NULL);

	for (j = 0 ; str[j] ; j++)
		num[j] = str[j];
	return (num);
}
