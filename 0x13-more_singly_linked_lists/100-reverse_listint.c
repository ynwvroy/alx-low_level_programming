#include "lists.h"

/**
 * reverse_listint - Reversing a linked list
 * @head: The pointer to the first node in the list
 *
 * Return: The pointer to the first node in new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *o = NULL;

	while (*head)
	{
		o = (*head)->next;
		(*head)->next = v;
		v = *head;
		*head = o;
	}

	*head = v;

	return (*head);
}
