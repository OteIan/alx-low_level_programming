#include "main.h"

/**
 * flip_bits - checks for no of bits needed to flip
 * to get from one number to another
 *
 * @n: number
 * @m: number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	/*Count the number of set bits*/
	while (i > 0)
	{
		if (i & 1)
			count++;
		i >>= 1;
	}
	return (count);
}
