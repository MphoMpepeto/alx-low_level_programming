#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data in a list
 * @head: a pointer to the head of a list
 *
 * Return: the sum or 0 if the listis empty
 */

int sum_listint(listint_t *head)
{
	int sum_up = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum_up = sum_up + head->n;
		head = head->next;
	}
	return (sum_up);
}
