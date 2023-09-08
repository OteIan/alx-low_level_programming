#include "lists.h"

/**
 * get_dnodeint_at_index - This functions gets the node at the given index
 * 
 * @head: Pointer to the head node of the list
 * @index: index of the node
 * 
 * Return: The node at the index, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (index == count)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}
