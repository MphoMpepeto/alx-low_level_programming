#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node in a list
 * @head: a pointer to the head of a list
 * @index: index of the nodes starting at 0
 *
 * Return: the nth node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
