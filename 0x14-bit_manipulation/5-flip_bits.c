#include "main.h"

/**
 * flip_bits - checks no. of bits needed to flip to get from one no. to another
 *
 * @n: num1
 * @m: num2
 *
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		if (result & 1)
			count++;
		result >>= 1;
	}
	return (count);
}
