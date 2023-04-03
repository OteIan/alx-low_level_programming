#include "main.h"

/**
 * _strchr - locates a character
 * @s: string to be examined
 * @c: character to be located
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
		else
			return (NULL);
	}
	return (0);
}
