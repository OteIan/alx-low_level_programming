#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list_int list
 * @head: pointer to the head of the list
 * @n: int value to be stored in the node
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newTemp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
		*head = temp;

	if (*head != NULL)
	{
		newTemp = *head;
		if (newTemp->next != NULL)
		{
			newTemp = newTemp->next;
		}
		newTemp->next = temp;
	}
	temp->n = n;
	temp->next = NULL;

	return (temp);
}
