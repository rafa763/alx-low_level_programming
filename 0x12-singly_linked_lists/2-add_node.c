#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - insert nodes at the beginning of linked list
 *
 * @head: pointer to the head of the linked list
 * @str: string to be inserted
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int l = 0;
	list_t *temp;

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
	temp->next = *head;
	*head = temp;
	return (*head);
}
