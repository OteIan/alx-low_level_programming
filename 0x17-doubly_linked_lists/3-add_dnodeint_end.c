#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * 
 * @head: Double pointer to the head node of the list
 * @n: Integer value to be stored by the new node
 * 
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}

	return (new);
}
