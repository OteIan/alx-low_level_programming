#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: pointer to the head node of the linked list
 *
 * Return: address of the node where the loop starts or NULL if no loop found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	turtle = hare = head;
	while (turtle && hare && hare->next)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare) /*The loop is found*/
		{
			turtle = head;
			while (turtle && hare && turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			if (turtle == hare) /*STart of the loop is found*/
			{
				return (turtle);
			}
		}
	}

	return (NULL); /*No loop found*/
}
