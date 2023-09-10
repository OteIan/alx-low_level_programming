#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL)
		printf("{}\n");

	else
	{
		printf("{");
		for (i = 0 ; i < ht->size ; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next)
					printf(", ");
				node = node->next;
			}
		}
		printf("}\n");
	}
}
