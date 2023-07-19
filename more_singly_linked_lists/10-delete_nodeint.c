#include "lists.h"
#include "1-listint_len.c"

/**
 * delete_nodeint_at_index - deletes specific node
 * @head: points to beginning of list
 * @index: where to delete
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < (index - 1))
	{
		current = current->next;
		count++;
	}

	if (count != (index - 1) || current->next == NULL)
		return (-1);

	previous = current->next;
	current->next = (current->next)->next;
	free(previous);

	return (1);
}
