#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: The converted number
 * Or 0 if there is one or more chars in the string b
 * that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int x = 0, i;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		x++;
	}

	for (i = 0; i < x ; i++)
	{
		num = num << 1;
		if (b[i] == '1')
			num = num | 1;
	}
	return (num);
}
