#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *x = (char *)&i;

	if (*x == 1)
		return (1); /*Little endian*/
	else
		return (0); /*Big endian*/
}
