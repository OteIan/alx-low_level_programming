#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	unsigned char flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}

	printf("}\n");
}
