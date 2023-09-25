#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int number;

	if (h == NULL)
		return (0);

		for (number = 0; h != NULL; number++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		return (number);
}
