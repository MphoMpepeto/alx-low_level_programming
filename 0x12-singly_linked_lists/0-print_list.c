#include "lists.h"

/**
 * print_list - prints all the elements in a linked list
 * @h: a pointer to a list
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h -> str)
		{
			printf("[0] (nil)\n");
			break;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}

		return (i);
}
