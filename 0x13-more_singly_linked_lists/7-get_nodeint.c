#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - return the node at the given index
 *
 * @head: pointer to the head node
 * @index: index of the required node
 *
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	while (head != NULL && index--)
		head = head->next;
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
