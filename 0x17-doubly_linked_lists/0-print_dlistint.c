#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print doubly linked list
 *
 * @h: pointer to the doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	const dlistint_t *ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
