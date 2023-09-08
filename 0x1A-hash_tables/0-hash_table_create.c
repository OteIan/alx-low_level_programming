#include "hash_tables.h"

/**
 * hash_table_create - This creates a hash table
 *
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table or
 * NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}


	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t **));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	for (i = 0 ; i < table->size ; i++)
		table->array[i] = NULL;

	return (table);
}
