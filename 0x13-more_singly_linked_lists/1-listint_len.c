#include "lists.h"

/**
 * listint_len - a function that returns the number of elements of a list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
	{
		return (0);
	}
	for (nodes = 0; h != NULL; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}

