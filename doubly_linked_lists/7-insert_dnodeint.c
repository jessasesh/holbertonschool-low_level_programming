#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node in list at desired place
 * @h: Pointer to the head of list
 * @idx: Place for new node
 * @n: Integer for new node to hold
 * Return: Address of new node/ Failure-NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	/* If the index is 0, use add_dnodeint to insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list to the position before the desired index */
	for (; idx != 1; idx--)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	/* Check if tmp is NULL after traversal */
	if (tmp == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Assign values to the new node */
	new->n = n;
	new->prev = tmp;
	new->next = (tmp->next == NULL) ? NULL : tmp->next;

	/* Update the next pointer of the previous node */
	if (tmp->next != NULL)
		tmp->next->prev = new;

	/* Update the next pointer of the current node */
	tmp->next = new;

	return (new);
}
