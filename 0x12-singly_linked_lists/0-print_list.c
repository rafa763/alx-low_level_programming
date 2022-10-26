#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all elements of the listt
 *
 * @h: pointer to struct
 *
 * Return: size_t (no. of nodes)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
