#include "lists.h"

/**
 * sum_dlistint - Calculates the sum total of integers within linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all integers in list
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/*Traverse the list and accumulate the sum of integers*/
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
