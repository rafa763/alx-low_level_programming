#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
