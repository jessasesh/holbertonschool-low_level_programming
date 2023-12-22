#include "hash_tables.h"

/**
 * hash_table_get - gets value associated key in hash table.
 * @ht: pointer to hash table
 * @key: key to get value of
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!(ht && key && *key))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
