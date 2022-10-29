#include "lists.h"
/**
 * sum_listint - calculate the sum of nodes data
 *
 * @head: pointer to the node head
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
