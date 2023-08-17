#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a list
 * 
 * @h: Pointer to the head node of the list
 * 
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
