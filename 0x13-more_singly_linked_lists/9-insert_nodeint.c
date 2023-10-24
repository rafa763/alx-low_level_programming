#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head node
 * @idx: the index to insert at
 * @n: data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;

	if (!head)
		return (NULL);

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->n = n;
	ptr = *head;
	if (idx == 0)
	{
		temp->next = ptr;
		ptr = temp;
		return (temp);
	}

	while (ptr && idx > 0)
	{
		ptr = ptr->next;
		idx--;
	}

	if (!ptr)
		return (NULL);

	temp->next = ptr->next;
	ptr->next = temp;

	return (ptr);
}
