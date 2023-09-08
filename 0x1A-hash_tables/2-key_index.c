#include "hash_tables.h"

/**
 * key_index - This gives you the index of a key
 *
 * @key: The key to be searched for
 * @size: Size of the array of the hash table
 *
 * Return: The index that the key/value pair should be stored in
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the 'hash_djb2' function */
	hash_value = hash_djb2(key);

	/* Use modulus to map hash_value to a valid index in the array */
	return (hash_value % size);
}
