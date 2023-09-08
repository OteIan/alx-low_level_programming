#include "main.h"

/**
 * set_bit - Set the value of a bit to 1
 *
 * @n: 1
 * @index: index
 *
 * Return: 1 if it worked otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	unsigned int num = sizeof(unsigned long int) * 8;

	if (index >= num)
		return (-1);

	*n |= mask;

	return (1);
}
