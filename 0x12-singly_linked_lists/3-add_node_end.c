#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: double pointer to list_t
 * @str: a pointer to a string
 *
 * Return: addr to the added element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tem = *head;
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tem->next)
		tem = tem->next;
	tem->next = new;
	return (new);
}
