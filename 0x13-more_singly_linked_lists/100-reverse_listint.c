#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to a pointer to the head node of the listint_t list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *newHead = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = newHead;
		newHead = *head;
		*head = temp;
	}
	*head = newHead;

	return (newHead);
}
