#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; h = h->next, i++)
		;

	return (i);
}
