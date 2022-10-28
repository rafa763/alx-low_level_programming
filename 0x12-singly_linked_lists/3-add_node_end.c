#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - insert node at the end of the list
 *
 * @head: pointer to the head node
 * @str: string to be inserted in the node
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	int l = 0;

	while (str[l])
		l++;
	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (!temp->str)
	{
		free(temp);
		return (NULL);
	}
	temp->len = l;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	return (*head);
}

