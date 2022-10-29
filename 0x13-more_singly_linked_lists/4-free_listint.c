#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free all nodes in a list
 *
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}	
