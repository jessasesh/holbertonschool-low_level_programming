#include "hash_tables.h"
/**
 * hash_table_set - add/update element in hash table
 * @ht: pointer to hash table
 * @key: key to add
 * @value: value associated with key
 *
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;
	/* Check if the hash table or key is NULL or empty */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	/* Create a copy of the value to store in the hash node */
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	/* Search for existing key in the linked list*/
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			/* Update value if key already exists */
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	/* Assign value to new node and update to head of list*/
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
