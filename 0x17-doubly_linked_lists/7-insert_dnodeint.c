#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given index
 * 
 * @h: Double pointer to the head node of the list
 * @idx: Index at which the new node should be inserted
 * @n: Data(n) that the node should hold
 * 
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *current = *h;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new->next = current->next;
			new->prev = current;
			if (current->next != NULL)
				current->next->prev = new;
			current->next = new;

			return (new);
		}

		current = current->next;
		count++;
	}

	free(new);
	return (NULL);
}
