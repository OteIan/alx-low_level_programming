#include "main.h"

/**
 * get_bit - Checks the value of a bit given at an index
 *
 * @n: number to be converted to binary
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*index is out of range*/

	return ((n >> index) & 1);
}
