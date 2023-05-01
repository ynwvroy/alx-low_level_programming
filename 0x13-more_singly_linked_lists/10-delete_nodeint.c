#include "lists.h"

/**
 * delete_nodeint_at_index - Deleting a node in linked list at a certain
 * index
 * @head: The pointer to the first element in the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *v = *head;
	listint_t *o = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(v);
		return (1);
	}

	while (x < index - 1)
	{
		if (!v || !(v->next))
			return (-1);
		v = v->next;
		x++;
	}

	o = v->next;
	v->next = o->next;
	free(o);

	return (1);
}
