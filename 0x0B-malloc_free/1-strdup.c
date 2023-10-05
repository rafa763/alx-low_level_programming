#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	char *p, *start;
	int size;

	size = 0;
	if (!str)
		return (NULL);

	while (str[size])
		size++;

	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);

	start = p;

	while (*str)
		*p++ = *str++;

	*p = '\0';

	return (start);
}
