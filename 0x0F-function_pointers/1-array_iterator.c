#include "function_pointers.h"

/**
 * array_iterator - executes a function given as the parameter
 * @array: pointer to an array to be used
 * @size: size of the array
 * @action: pointer to the function to be used
 * Return: NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size)
	{
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
	}
}
