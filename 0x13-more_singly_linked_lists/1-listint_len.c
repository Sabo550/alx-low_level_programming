#include "lists.h"

/**
 * listint_len - the returns number of the elements in
 * a linked list.
 * @h: head of list.
 *
 * Return: the numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
