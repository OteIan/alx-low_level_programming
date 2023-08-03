#include "main.h"

/**
 * get_bit - gets the bit at the given index
 *
 * @n: Bit to be returned
 * @index: Index to be inspected
 *
 * Return: Value of bit at index or -1 if an orror occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= num)
		return (-1);

	if (n & mask)
		return (-1);

	else
		return (0);
}
