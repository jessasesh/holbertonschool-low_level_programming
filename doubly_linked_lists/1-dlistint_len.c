#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*Variable to store the number of elements*/
	size_t node_count = 0;

	/*Iterate through the dlistint_t list*/
	while (h != NULL)
	{
		/*Increment the count of nodes*/
		node_count++;

		/*Move to the next node in the list*/
		h = h->next;
	}

	/*Return the total number of elements in the list*/
	return (node_count);
}

