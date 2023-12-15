#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates hash table
 * @size: size of array
 *
 * Return: Pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocate memory for the new hash table */
	hash_table_t *new_table;
	unsigned long int i;

	/* Check if the size is 0, and return NULL if so (invalid size) */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Set the size of the hash table */
	new_table->size = size;

	/* Allocate memory for the array of hash nodes */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		/* Free allocated memory for hash table, if allocation fails */
		free(new_table);
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	/* Return a pointer to the newly created hash table */
	return (new_table);
}

