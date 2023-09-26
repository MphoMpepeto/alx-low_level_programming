#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: a pointer to the head of a list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
