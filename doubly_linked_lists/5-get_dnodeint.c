#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: Head of list
 * @index: Node to find
 * Return: Address of new node/ Null upon failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	/* Traverse list until index or end of the list is reached*/
	while (head && index > 0)
	{
		/* Move to the next node in the list */
		head = head->next;
		index--;
	}

	/* Return the node at the specified index (or NULL) */
	return (head);

}
