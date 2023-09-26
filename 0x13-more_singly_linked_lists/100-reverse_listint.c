#include "lists.h"

/**
 * reverse_listint - a func that reverses a list
 * @head: a double pointer to the head node
 *
 * Return: a pointer to the first node of rev list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp_new;

	if (head == NULL || *head == NULL)
		return (NULL);
	tmp = *head;
	*head = tmp->next;
	tmp->next = NULL;

	while (*head != NULL)
	{
		tmp_new = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = tmp_new;
	}
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	return (NULL);
}
