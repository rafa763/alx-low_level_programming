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
	listint_t *current, *previous, *temp;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->n = n;
	current = *head;
	previous = *head;
	if (!head || idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	while (idx--)
	{
		if (current)
		{
			previous = current;
			current = current->next;
		}
		else
		{
			free(temp);
			return (NULL);
		}
	}

	previous->next = temp;
	temp->next = current;

	return (temp);
}
