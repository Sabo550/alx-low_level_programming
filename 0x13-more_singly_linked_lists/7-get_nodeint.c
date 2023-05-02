#include "lists.h"

/**
 * get_nodeint_at_index - locate the node of a linked list
 * @head: the head of list.
 * @index: index of node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 *      otherwise- the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
