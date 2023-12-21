#include "hash_tables.h"

/**
 * key_index - index where key pair should be stored
 * @key: key to get the index
 * @size: size of array of hash table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Compute hash value using djb2*/
	unsigned long int hash_value = hash_djb2(key);

	/* Calculates index by taking modulo of the hash value and the table size */
	unsigned long int index = hash_value % size;

	return (index);
}
