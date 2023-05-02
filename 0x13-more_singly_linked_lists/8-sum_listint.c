#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of
 * listint_t list.
 * @head: the head of list.
 *
 * return: if the list is empty - 0.
 *      otherwise- sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
