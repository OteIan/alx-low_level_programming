#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list
 * 
 * @h: The head node of the list
 * 
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
