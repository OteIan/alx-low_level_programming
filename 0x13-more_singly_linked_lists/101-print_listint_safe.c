#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list
 *
 * @head: pointer to the head node of a listint_t list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		temp = head;
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (count);
}
