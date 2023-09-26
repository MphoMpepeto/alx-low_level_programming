#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list
 * @head: a double pointer to the head of a list
 *
 * Return: the head node's data or if list is empty 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
