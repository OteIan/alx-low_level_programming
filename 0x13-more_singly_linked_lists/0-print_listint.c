#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: pointer to the head of the print_int list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
