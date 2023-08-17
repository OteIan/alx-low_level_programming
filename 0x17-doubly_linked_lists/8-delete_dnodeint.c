#include "lists.h"

/**
 * delete_dnodeint_at_index - This deletes the node at the given index
 * 
 * @head: Double pointer to the head node of the list
 * @index: Index of the node to be deleted
 * 
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		if (current->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	current = temp->next;
	temp->next = current->next;
	current->next->prev = current->prev;
	free(current);

	return (-1);

}
