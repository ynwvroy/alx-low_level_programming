#include "lists.h"

/**
 * free_listint2 - Freeing a linked list
 * @head: pointer to the listint_t that is going to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *v;

	if (head == NULL)
		return;

	while (*head)
	{
		v = (*head)->next;
		free(*head);
		*head = v;
	}

	*head = NULL;
}
