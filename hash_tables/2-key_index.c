#include "hash_tables.h"

/**
 * key_index - index of key
 * @key: key to get the index of
 * @size: size of the arry of the hash table
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;
	
	hash_value = hash_djb2(key);

	index = hash_value % size;

	return (index);
}
