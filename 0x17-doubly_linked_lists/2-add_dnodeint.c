#include "lists.h"

/**
 * adddnodeint - Adds a node at the beginning of a list
 * 
 * @head: Double pointer to the head node of the list
 * @n: integer value stored in the new node
 * 
 * Return: Address of the new element or NULL if it failed 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	new->next = *head;
	*head = new;

	return (new);
}
