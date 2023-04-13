#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of the memory
 *
 * Return: to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
