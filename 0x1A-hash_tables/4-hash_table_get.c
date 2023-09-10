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
	int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || len(key) == 0)
		return (NULL);

	for (i = 0 ; ht->array[i] != NULL ; i++)
	{
		current_item = ht->array[i];
		if (strcmp(current_item->key, key) == 0)
			return (current_item->value);
	}

	return (NULL);
}
