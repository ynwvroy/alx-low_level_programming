#include "lists.h"

/**
 * pop_listint - Deleting the head node of a linked list
 * @head: pointer to first element that is in the linked list
 *
 * Return:Data inside elements that is deleted, or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *v;
	int o;

	if (!head || !*head)
		return (0);

	o = (*head)->n;
	v = (*head)->next;
	free(*head);
	*head = v;

	return (o);
}
