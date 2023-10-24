#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head node
 * @n: what to be inserted in the node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);

	if (!*head)
	{
		*head = node;
		return (node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	node->n = n;
	node->next = NULL;

	temp->next = node;

	return (node);
}
