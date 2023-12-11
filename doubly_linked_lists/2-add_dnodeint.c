/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the dlistint_t list.
 * @n: Integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    /* Declare a pointer to a new dlistint_t node */
    dlistint_t *new;

    /* Allocate memory for the new node */
    new = malloc(sizeof(dlistint_t));
    
    /* Check if memory allocation was successful */
    if (new == NULL)
        return (NULL);

    /* Set the data of the new node */
    new->n = n;

    /* Set the 'prev' pointer of the new node to NULL */
    new->prev = NULL;

    /* Set the 'next' pointer of the new node to the current head */
    new->next = *head;

    /* If the current head is not NULL, update the 'prev' pointer of the current head */
    if (*head != NULL)
    (*head)->prev = new;

    /* Update the head pointer to point to the new node */
    *head = new;

    /* Return the address of the new node */
    return (new);
}
