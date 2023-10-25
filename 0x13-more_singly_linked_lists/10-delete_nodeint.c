#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list.
 * @head: pointer to the head node
 * @index:  node location
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;

	if (!head || !*head)
		return (-1);

	current = *head;
	prev = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (index)
	{
		prev = current;
		current = current->next;
		index--;
	}

	if (!current)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
