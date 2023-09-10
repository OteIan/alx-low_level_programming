#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0, itr = 0;
	const hash_table_t *temp = ht;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL)
		printf("{}\n");

	else
	{
		for (i = 0 ; i < temp->size ; i++)
		{
			if (ht->array[i] != NULL)
				count++;
		}

		printf("{");
		for (i = 0 ; i < ht->size ; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				printf("'%s': '%s'", node->key, node->value);
				if (itr != count - 1)
					printf(", ");
				itr++;
				node = node->next;
			}
		}
		printf("}\n");
	}
}
