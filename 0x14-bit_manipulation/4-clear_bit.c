#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 *
 * @n: pointer to a number to be worked on
 * @index: index to be changed
 *
 * Return: 1 if it worked otherwise 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*Index out of range*/

	*n &= ~(1ul << index);
	return (1);
}
