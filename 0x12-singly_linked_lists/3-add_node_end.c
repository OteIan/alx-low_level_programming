#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: pointer to a pointer to the head node of a list
 * @str: string to be duplicated
 *
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;
	int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = len;
	new_node->next = NULL;
	new_node->str = strdup(str);
	
	if (!*head)
		*head = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
