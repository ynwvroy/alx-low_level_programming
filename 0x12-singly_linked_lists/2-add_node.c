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
	list_t *N;

	len = 0;

	while (str[len])
	{
		len++;
	}

	N = malloc(sizeof(list_t));
	if (!N)
	{
		return (NULL);
	}

	N->str = strdup(str);
	N->len = len;
	N->next = (*head);
	(*head) = N;

	return (*head);
}
