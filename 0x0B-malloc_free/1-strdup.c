#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to copied string
 *
 * @str: string to be copied
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int size = 0;
	char *result, *ptr;

	while (str[size])
		size++;
	ptr = malloc(sizeof(char) * size);

	if (!ptr)
		return (NULL);
	result = ptr;
	while (*str)
		*ptr++ = *str++;
	return (result);
}
