#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to a pointer to the head of the listint_t list
 *
 * Return: heads node data if successful otherwise return 0
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
