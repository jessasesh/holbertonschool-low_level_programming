#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node from list
 * @h: Pointer to head of list
 * @idx: Location of node to delete
 *
 * Return: Success - 1
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{

	dlistint_t *tmp = *h;

	/* Check if the list is empty */
	if (*h == NULL)
		return (-1);

	/* Traverse the list to desired node */
	for (; idx != 0; idx--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	/* Update pointers to remove node */
	if (tmp == *h)
	{
		*h = tmp->next;
		if (*h != NULL)
			(*h)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;

		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	/* Free the memory of the deleted node */
	free(tmp);


	return (1);
}
