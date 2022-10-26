#include "lists.h"
#include <stddef.h>
/**
 * list_len - return the number of elements in a list
 *
 * @h: pointer to linked list
 *
 * Return: (int) size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
