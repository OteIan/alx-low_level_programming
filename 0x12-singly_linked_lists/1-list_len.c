#include "main.h"

/**
 * list_len - checks number of elements in a list
 * @h: pointer to a list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
