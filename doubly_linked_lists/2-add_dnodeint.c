#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the dlistint_t list.
 * @n: Integer for the new node to contain.
 *
 * Return: Address of new node/ Null upon failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Declare and allocate memory for a new node */
	dlistint_t *new = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful */
	if (new == NULL)
		return (NULL);

	/* Initialize the new node */
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	/* Update the 'prev' pointer of the current head if it exists */
	if (*head != NULL)
		(*head)->prev = new;

	/* Update the head pointer to the new node */
	*head = new;

	/* Return the address of the new node */
	return (new);
}
