#include "lists.h"

/**
 * print_list - prints all the elements in a linked list
 * @h: a pointer to a list
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);

	for (x = 1; h->next != NULL; x++)
	{
		if (h->str == NULL)
		{
			printf("[0] %s\n", "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
		return (x);
}
