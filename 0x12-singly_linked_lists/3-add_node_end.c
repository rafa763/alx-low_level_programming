#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be stored
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL;
	list_t *p;

	temp = malloc(sizeof(list_t));

	if (!temp || !str)
		return (NULL);

	temp->str = malloc(strlen(str));

	if (!temp->str)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		p = *head;
		while (p->next)
			p = p->next;
		p->next = temp;
	}

	return (temp);
}
