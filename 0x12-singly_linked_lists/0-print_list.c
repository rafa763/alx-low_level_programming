#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *p;

	if (!h)
		return (0);

	p = h;
	for (i = 0; p; i++)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
	}

	return (i);
}
