#include "lists.h"

/**
 * sum_listint - adds the data of all nodes of a listint_t list
 * @head: pointer to the head node of a listint_t list
 *
 * Return: summ of all the data if successful otherwise NULL
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
