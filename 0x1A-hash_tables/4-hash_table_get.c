#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with key
 *
 * @ht: Pointer to the hash table to look into
 * @key: Pointer to the key to look for
 *
 * Return: value associated with the element or
 * NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_item;
	int index = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);


	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];

	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
			return (current_item->value);
		current_item = current_item->next;
	}

	return (NULL);
}
