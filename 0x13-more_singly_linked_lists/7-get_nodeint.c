#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head
 * @index: index of the node
 *
 * Return: node at @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
		head = head->next;
		index--;
	}

	return ((index == 0) ? head : NULL);
}
