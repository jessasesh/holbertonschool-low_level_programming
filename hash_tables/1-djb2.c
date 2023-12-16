#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: input string to be hashed
 *
 * Return: Caluculated hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	/* Initialize the hash value */
	unsigned long int hash = 5381;
	int c;

	/* Iterate through each character in the input string */
	while ((c = *str++))
	{
		/* Update the hash value using the djb2 algorithm: hash * 33 + c */
		hash = ((hash << 5) + hash) + c;
	}

	/* Return the calculated hash value */
	return (hash);
}
