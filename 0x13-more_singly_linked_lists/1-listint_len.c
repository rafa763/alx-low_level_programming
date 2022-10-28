#include "lists.h"
/**
 * listint_len - count number of elements
 *
 * @h: pointer to the head of the list
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
