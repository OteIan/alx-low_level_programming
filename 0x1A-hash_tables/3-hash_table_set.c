#include "hash_tables.h"

/**
 * make_hash_node - Makes a new hash node
 * 
 * @key: Pointer to the key of the node
 * @value: Pointer to the value of the node
 * 
 * Return: Pointer to the new hash node, or NULL on failure
*/
hash_node_t *make_hash_node(const char *key, const char *value)
{
    hash_node_t *new_node;

    new_node = malloc(sizeof(hash_node_t));

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->value);
        free(new_node);
        return (NULL);
    }

    new_node->next = NULL;
    return (new_node);
}

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
    hash_node_t *current_item, *new_item;

    if (ht == NULL || ht->array == NULL || ht->size == NULL ||
        key == NULL || strlen(key) == 0 || value == NULL)
        return (0);

    new_item = malloc(sizeof(hash_node_t));
    new_item = make_hash_node(key, value);
    index = key_index(key, ht->size); 
    current_item = ht->array[index];

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