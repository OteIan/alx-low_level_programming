#include "lists.h"

/**
 * add_node - pointer to a function that adds a new node at the
 * beginning of a list
 *
 * @head: Pointer to a pointer to the head node of the list
 * @str: pointer to a string to be duplicated
 *
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead;

	if (head == NULL || *head == NULL || !str)
		return (NULL);

	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
		return (NULL);

	newHead->str = strdup(str);
	if (newHead->str == NULL)
	{
		free(newHead);
		return (NULL);
	}

	newHead->next = *head;
	*head = newHead;

	return (newHead);
}
