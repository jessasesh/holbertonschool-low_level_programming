#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *cnode, *nnode;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			cnode = ht->array[index];
			while (cnode)
			{
				nnode = cnode->next;
				free(cnode->key);
				free(cnode->value);
				free(cnode);
				cnode = nnode;
			}
		}
	}
	free(head->array);
	free(head);
}
