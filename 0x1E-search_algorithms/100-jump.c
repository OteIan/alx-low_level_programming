#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Vlue to be searched for
 *
 * Return: First index where vlue is located
 */
int jump_search(int *array, size_t size, int value)
{
	int i;
	size_t start = 0, end = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[end] < value && start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);
		if (end > size - 1)
			end = size;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start ; (size_t)i <= end ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
