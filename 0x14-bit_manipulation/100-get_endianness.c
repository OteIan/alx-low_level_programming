#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
