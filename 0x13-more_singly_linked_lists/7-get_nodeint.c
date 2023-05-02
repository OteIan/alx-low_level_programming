#include "lists.h"

/**
 * get_nodeint_at_index - checks the nth node of a listint_t list
 * @head: pointer to the head of a listint_t list
 * @index: index of the node
 *
 * Return: the nth node of the list if successful otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	while (temp != NULL && n < index)
	{
		temp = temp->next;
		n++;
	}

	if (n != index)
		return (NULL);

	return (temp);
}
