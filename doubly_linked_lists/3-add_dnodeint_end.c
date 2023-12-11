#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at end of list
 * @head: Pointer to the head of the dlistint_t list
 * @n: Integer for the new node
 * Return: Address of new node/ Null upon failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	/* Allocate memory for a new node */
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Initialize the new node with data and set next to NULL*/
	new->n = n;
	new->next = NULL;

	/* If the list is empty, update head and return */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* Traverse to the last node in the list */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* Update pointers to add the new node at the end */
	last->next = new;
	new->prev = last;

	/* Return the address of the new node */
	return (new);
}
