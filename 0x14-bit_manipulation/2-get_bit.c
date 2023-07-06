#include "main.h"

/**
 * get_bit - gets the bit at the given index
 *
 * @n: bit to be returned
 * @index: index to be inspected
 *
 * Return: value of bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= num)
		return (-1);

	if (n & mask)
		return (1);
	else
		return (0);
}
