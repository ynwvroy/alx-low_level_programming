#include "lists.h"

/**
 * insert_nodeint_at_index - Inserting new node in a linked list
 * @head: The pointer to first node in the list
 * @idx: The index where new node is being added
 * @n: The data that is being inserted in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *o;
	listint_t *v = *head;

	o = malloc(sizeof(listint_t));
	if (!o || !head)
		return (NULL);

	o->n = n;
	o->next = NULL;

	if (idx == 0)
	{
		o->next = *head;
		*head = o;
		return (o);
	}

	for (x = 0; v && x < idx; x++)
	{
		if (x == idx - 1)
		{
			o->next = v->next;
			v->next = o;
			return (o);
		}
		else
			v = v->next;
	}

	return (NULL);
}
