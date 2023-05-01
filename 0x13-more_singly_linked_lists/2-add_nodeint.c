#include "lists.h"

/**
 * add_nodeint - Adding a new node at the beginning of linked list
 * @head: Pointer that is to the first node in list
 * @n: The data that is being inserted in that new node
 *
 * Return: pointer to new node, or NULL if if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *v;

	v = malloc(sizeof(listint_t));
	if (!v)
		return (NULL);

	v->n = n;
	v->next = *head;
	*head = v;

	return (v);
}
