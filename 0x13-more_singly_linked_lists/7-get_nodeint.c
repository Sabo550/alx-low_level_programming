#include "lists.h"

/**
 * get_nodeint_at_index - the returns of the nth node of linked list
 * @head: the head of the list.
 * @index: index of node.
 *
 * Return: the nth node. If the node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned integer index)
{
	unsigned integer i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
