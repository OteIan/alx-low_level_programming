#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: void
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return ((int)*c);
}
