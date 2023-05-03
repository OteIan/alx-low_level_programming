#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: pointer to a pointer to the head node of the listint_t list
 *
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *now;

	if (h == NULL || *h == NULL)
		return (0);

	now = *h;
	while (now != NULL)
	{
		count++;
		if (now < now->next)
		{
			temp = now;
			now = now->next;
			free(temp);
		}
		else
		{
			free(now);
			break;
		}
	}
	*h = NULL; /*Sets head to NULL*/
	return (count);
}
