#include "lists.h"

/**
 * free_dlistint - A function tha frees a list
 * 
 * @head: Pointer to the head node of the list
 * 
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (head != NULL)
			head->prev = NULL;

		free(temp);
	}
}
