#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 *
 * @index: index of the node to be deleted
 * @head: pointer to a pointer to the head node of the list
 *
 * Return: 1 if succeeded otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *now;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}

	while (temp != NULL && x < index - 1)
	{
		temp = temp->next;
		x++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	now = temp->next;
	now->next = temp->next;
	free(now);
	

	return (1);
}
