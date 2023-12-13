#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos;

	if (array == NULL)
		return (-1);

	while (array[low] <= value && array[high] >= value && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			     (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		     (value - array[low]));

	if ((size_t)value >= size)
		printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
