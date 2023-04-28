#include "lists.h"

/**
 * sum_listint - the returns of the sum of all data (n) of
 * linked list.
 * @head: the head of list.
 *
 * Return: the sum of data (n).
 */
integer sum_listint(listint_t *head)
{
	integer sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
