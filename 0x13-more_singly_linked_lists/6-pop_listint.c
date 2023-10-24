#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: pointer to the head node
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *ptr;

	if (!*head)
		return (0);

	ptr = *head;
	x = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (x);
}
