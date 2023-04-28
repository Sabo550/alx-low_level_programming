#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * of the linked list.
 * @head: the head of list.
 * @index: index of list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
integer delete_nodeint_at_index(listint_t **head, unsigned integer index)
{
	unsigned integer i;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
