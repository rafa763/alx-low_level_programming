#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free all nodes in linked list
 *
 * @head: pointer to head node
 *
 * Return: Void
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
