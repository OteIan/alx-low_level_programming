#include "main.h"

/**
 * print_binary - prints binary representation of a number
 *
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int i, zeros = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	/*Count the number of leading zeros in the binary representation*/
	for (i = bits - 1 ; i >= 0 ; i--)
	{
		if ((n & (1ul << i)) == 0)
			zeros++;
		else
			break;
	}

	/*Prints binary representation of n, without leading zeros*/
	for (i = bits - 1 - zeros; i >= 0 ; i--)
	{
		if (n & (1ul << i))
			printf("1");
		else
			printf("0");
	}
}
