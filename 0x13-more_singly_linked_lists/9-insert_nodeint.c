#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to a pointer to the head node of the list
 * @idx: index at which new node is inserted
 * @n: int value that the new node holds
 *
 * Return: address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp != NULL && x < idx - 1)
	{
		temp = temp->next;
		x++;
	}

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}


	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
