#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head of a node
 *
 * @head: pointer to the head pointer
 *
 * Return: int inside the node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num = 0;

	if (*head == NULL)
		return (0);
	ptr = *head;
	num = ptr->n;
	ptr = ptr->next;
	free(*head);
	*head = ptr;
	return (num);
}
