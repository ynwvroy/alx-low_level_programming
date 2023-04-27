#include "lists.h"

/**
 * free_list - The function that actually frees a list
 * @head: The list that is being freed
 */

void free_list(list_t *head)
{
	list_t *V;

	while (head)
	{
		V = head->next;
		free(head->str);
		free(head);
		head = V;
	}
}
