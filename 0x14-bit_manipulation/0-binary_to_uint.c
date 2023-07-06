#include "main.h"

/**
 * binary_to_uint - Cinverts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 & 1 chars
 * Return: the converted number or 0 if
 * there is a char in b that is not 0 or 1 or
 * if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, length = 0;
	int result = 0;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
		length++;

	for (i = 0 ; i < length ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) + (b[i] - '0');
	}

	return (result);
}
