#include "lists.h"
#include <stdlib.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be stored
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int size = 0;
	char *s;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->next = *head;

	while (str[size])
		size++;

	s = malloc(sizeof(char) * size + 1);

	if (!s)
	{
		free(temp);
		return (NULL);
	}

	temp->str = s;
	temp->len = size;

	while (size--)
		*s++ = *str++;

	s = '\0';

	*head = temp;

	return (temp);
}
