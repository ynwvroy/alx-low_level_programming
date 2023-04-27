#include "lists.h"

/**
 * add_node - Function that is adding a new node at beginning of a list
 * @head: The double pointer
 * @str: A new string that is being duplicated
 * Return: Address of new element
 */

list_t *add_node(list_t *head, const char *str)
{
	unsigned int len;
	list_t *O;

	len = 0;

	while (str[len])
	{
		len++;
	}

	O = malloc(sizeof(list_t));
	if (!o)
	{
		return (NULL);
	}

	O->str = strdup(str);
	O->len = len;
	o->next = (*head);
	(*head) = O;

	return (*head);
}
