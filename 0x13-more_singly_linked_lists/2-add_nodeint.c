#include "lists.h"

/**
 * add_nodeint - adding a new node at beginning
 * of linked list
 * @head: the head of a list.
 * @n: n element.
 *
 * Return: the address of new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const integer n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
