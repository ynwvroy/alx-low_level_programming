#include "lists.h"

/**
 * get_nodeint_at_index - Returning node at certain index in linked list
 * @head: The first node in linked list
 * @index: The index of node to return
 *
 * Return: pointer to the node we are looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int v = 0;
	listint_t *o = head;

	while (o && v < index)
	{
		o = o->next;
		v++;
	}

	return (o ? o : NULL);
}
