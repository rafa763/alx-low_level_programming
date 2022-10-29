#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - insert node at beginning
 *
 * @head: pointer to head node
 * @n: integer to be inserted in the node
 *
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
