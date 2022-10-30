#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node at specified index
 *
 * @head: pointer to the head pointer
 * @index: position of the node to be deleted
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *del;

	ptr = *head;
	del = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (index != 1 && ptr)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr == NULL)
		return (-1);
	del = ptr->next;
	ptr->next = del->next;
	free(del);
	del = NULL;
	return (1);
}
