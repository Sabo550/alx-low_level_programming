#include "lists.h"

/**
 * add_nodeint - adds new node at beginning
 * of a linked list
 * @head: head of listint_t list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 *     Otherwise- the address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
