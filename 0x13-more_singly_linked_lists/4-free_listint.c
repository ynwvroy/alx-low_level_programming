#include "lists.h"

/**
 * free_listint - Freeing a linked list
 * @head: listint_t list that is going to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *v;

	while (head)
	{
		v = head->next;
		free(head);
		head = v;
	}
}
