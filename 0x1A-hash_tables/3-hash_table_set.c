#include "hash_tables.h"

/**
 * hash_table_set - This adds an element to the hash table
 *
 * @ht: Pointer to the hash table to add/update the value to
 * @key: Pointer to the key
 * @value: Pointer to the value associated with the key
 *
 * Return: 1 if succeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_item, *new_item = malloc(sizeof(hash_node_t));

	if (key == NULL || ht == NULL || new_item == NULL)
		return (0);
	index = key_index(key, ht->size);
	current_item = ht->array[index];
	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (0);
	}
	new_item->value = strdup(value);
	if (new_item->value == NULL)
	{
		free(new_item->key);
		free(new_item);
		return (0);
	}
	new_item->next = NULL;
	if (current_item == NULL)
		ht->array[index] = new_item;
	else
	{
		while (current_item)
		{
			if (strcmp(current_item->key, key) == 0)
			{
				free(current_item->value);
				current_item->value = strdup(value);
				if (current_item->value == NULL)
					return (0);
				return (1);
			}
			current_item = current_item->next;
		}
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
	}
	return (1);
}
