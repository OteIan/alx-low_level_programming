#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0 ; i < ht->size ; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
