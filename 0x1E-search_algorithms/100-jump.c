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
	size_t start = 0, end = sqrt(size), i;

	if (array == NULL)
		return (-1);

	for (i = 0 ; start < size && array[start] < value ; )
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		i = start;
		start += end;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, start);

	start = start < size - 1 ? start : size - 1;

	for (; (size_t)i < start && array[i] < value ; i++)
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);

	return (array[i] == value ? (int)i : -1);
}
