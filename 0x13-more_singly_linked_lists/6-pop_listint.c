#include "lists.h"

/**
 * pop_listint - deleting head node of
 * the linked list
 * @head: the head of the list.
 *
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{
	integer hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
