#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1, *p2;

	if (!head || !*head)
		return (NULL);

	p1 = NULL;
	p2 = *head;
	while (*head)
	{
		p2 = (*head)->next;
		(*head)->next = p1;
		p1 = *head;
		(*head) = p2;
	}

	return (*head);
}
