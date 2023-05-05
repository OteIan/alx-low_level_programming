#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 *
 * @n: pointer to the number worked on
 * @index: index to be changed
 *
 * Return: 1 if it worked otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1ul << index;
	return (1);
}
