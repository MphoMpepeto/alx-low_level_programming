#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: a double pointer to the list
 * @n: element to be added at the end of list
 *
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}

	new_end = malloc(sizeof(listint_t));

	if (new_end == NULL)
	{
		return (NULL);
	}
	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_end;
	return (new_end);
}
