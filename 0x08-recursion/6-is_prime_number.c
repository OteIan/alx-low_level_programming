#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: integer
 * @i: iterator
 * Return: 1 if n is prime number otherwise 0
 */

int is_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (is_prime_number(n, i - 1));
}
