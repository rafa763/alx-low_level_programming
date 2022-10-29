#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free nodes in the list
 *
 * @head: pointer to the head pointer
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *h;

	if (head == NULL)
		return;
	h = *head;
	while (h != NULL)
	{
		ptr = h;
		h = h->next;
		free(ptr);
	}
	*head = NULL;
	free(h);
}
