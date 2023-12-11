#include "lists.h"

/**
 * free_dlistint - Frees a linked list
 * @head: Head of list
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *tmp;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		/* Store the next node before freeing the current node */
		tmp = head->next;

		/* Free the current node */
		free(head);

		/* Move to the next node */
		head = tmp;
	}
}
