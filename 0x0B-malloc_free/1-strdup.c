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

	p = malloc(sizeof(char) * sizeof(str));
	if (!p)
		return (NULL);
	start = p;
	while (*str)
		*p++ = *str++;

	return (start);
}
