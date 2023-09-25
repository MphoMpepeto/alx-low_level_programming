#include "lists.h"

/**
 * add_nodeint - a function that prints all the elements of a list
 * @head: a double pointer to the list
 * @n: new element to be created
 *
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	if (head == NULL)
	{
		return (NULL);
	}

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_element->next = NULL;
	}
	else
	{
		new_element->next = *head;
	}
	new_element->n = n;
	*head = new_element;
	return (*head);
}
