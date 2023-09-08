#include "main.h"

/**
 * binary_to_uint - Converts a binary number into an unsigned integer
 *
 * @b: Pointer to a string of 0 & q chars
 *
 * Return: The converted number or 0 if there is a char in b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0, result = 0;

	if (b == NULL)
		return (0);

	/* Calculates the length of the string */
	while (b[len] != '\0')
		len++;

	/* Process each character in the binary string */
	for (i = 0 ; i < len ; i++)
	{
		/* Check if one of the chars is not 0 or 1 */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Shift the result to the left and add the current bit */
		result = (result << 1) + (b[i] - '0');
	}

	return (result);
}
