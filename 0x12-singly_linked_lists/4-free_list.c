#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		free(head->str);
		head = head->next;
		free(ptr);
	}
}
