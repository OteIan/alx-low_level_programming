#include "lists.h"

/**
 * sum_dlistint - Adds the data(n) of all the nodes in the list
 * 
 * @head: Pointer to the head node of the list
 * 
 * Return: Sum of data(n) in all the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
