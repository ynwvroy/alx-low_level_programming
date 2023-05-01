#include "lists.h"

/**
 * add_nodeint_end - Adding a node at the end of linked list
 * @head: A pointer to the first element in the list
 * @n: The data that is being inserted in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *v;
	listint_t *o = *head;

	v = malloc(sizeof(listint_t));
	if (!v)
		return (NULL);

	v->n = n;
	v->next = NULL;

	if (*head == NULL)
	{
		*head = v;
		return (v);
	}

	while (o->next)
		o = o->next;

	o->next = v;

	return (v);
}
