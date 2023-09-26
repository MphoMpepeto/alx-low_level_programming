#include "lists.h"

/**
 * delete_nodeint_at_index - a func that deletes a node list
 * @head: a double pointer to the head of a list
 * @index: the  index of a the node that ahould be deleted
 * Return: 1 if successful and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y;
	listint_t *tmp;
	listint_t *curr_node;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (y = 0; y < index -1 && tmp != NULL && index != 0; y++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		curr_node = tmp->next;
		free(tmp);
		*head = curr_node;
	}
	else
	{
		if (tmp->next == NULL)
			curr_node = tmp->next;
		else
		{
			curr_node = tmp->next->next;
		}
		free(tmp->next);
		tmp->next = curr_node;
	}
	return (1);
}
