#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node at a given index
 *
 * @head: pointer to the head pointer
 * @idx: index to be inserted at
 * @n: data to be stored in the node
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	ptr = *head;
	while (ptr && idx--)
		ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);
	temp->n = n;
	temp->next = ptr->next;
	ptr->next = temp;
	return (*head);
}
