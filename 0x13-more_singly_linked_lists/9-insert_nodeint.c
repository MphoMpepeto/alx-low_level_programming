#include "lists.h"

/**
 * new_node - a function that creates a new node
 * @n: the data in the node
 * Return: a pointer to the new node or null
 */

listint_t *new_node(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	return (node);
}

/**
 * insert_nodeint_at_index - a function that inserts a new node on list
 * @head: a double pointer to the head of a list
 * @idx: index of the list where the nide should be added
 * @n:
 *
 * Return: NULL if node not added or address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *tmp_new;
	listint_t *tmp_old;
	listint_t *node;

	tmp_new = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	node = new_node(n);

	if (node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	if (idx == 0)
		*head = node;
	for (x = 0; x < idx - 1 && tmp_new != NULL && idx != 0; x++)
		tmp_new = tmp_new->next;
	if (tmp_new == NULL)
		return (NULL);
	if (idx == 0)
		node->next = tmp_new;
	else
	{
		tmp_old = tmp_new->next;
		tmp_new->next = node;
		node->next = tmp_old;
	}
	return (node);
}
