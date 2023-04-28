#include "lists.h"

/**
 * reverse_listint - the reverses of linked list.
 * @head: the head of list.
 *
 * Return: the pointer to first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *y;

	x = NULL;
	y = NULL;

	while (*head != NULL)
	{
		x = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}

	*head = x;
	return (*head);
}
