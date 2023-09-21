#include "lists.h"

/**
 * free_list - releases nodes from the list
 * @head: pointer to the head node
 *
 */

void free_list(list_t *head)
{
	list_t *tem;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
	free(head->str);
	free(head);
}
