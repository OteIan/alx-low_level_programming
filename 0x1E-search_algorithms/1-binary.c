#include "search_algos.h"

/**
 * recursive_findElement - Recursive function that searches for a value
 *
 * @array: Pointer to the array being searched
 * @start: Starting index to begin the search
 * @end: Ending index to end the search
 * @value: Value being searched for
 *
 * Return: The matching element
 */
int recursive_findElement(int *array, int start, int end, int value)
{
	int middle = (start + end) / 2, i;

	printf("Searching in array: %d", array[start]);
	for (i = start + 1 ; i <= end; i++)
		printf(", %d", array[i]);
	printf("\n");

	if (start >= end && array[middle] != value)
		return (-1);
	else if (array[middle] == value)
		return (middle);
	else if (array[middle] > value)
		return (recursive_findElement(array, start, middle - 1, value));
	else if (array[middle] < value)
		return (recursive_findElement(array, middle + 1, end, value));

	return (-1);
}

/**
 * binary_search - Searches for a value in an array of integers using the
 * binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: First index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_findElement(array, 0, size - 1, value));
}
