#include "lists.h"

/**
  * print_dlistint- prints elements of list
  * @h: pointer to head of list
  * Return: number of nodes in linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	/* Initialize a variable to count the number of nodes*/
	size_t count = 0;

	/*Traverse list until NULL is reached*/
	while (h != NULL)
	{
		/*Print the data of the current node*/
		printf("%d\n", h->n);

		/*Move to the next node in the list*/
		h = h->next;

		/*Increment the count of nodes*/
		count++;
	}

	/*Return the total number of nodes in the linked list*/
	return (count);
}
