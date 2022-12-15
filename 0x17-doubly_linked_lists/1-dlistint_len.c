#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - count doubly linked list nodes
 *
 * @h: pointer to the doubly linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
