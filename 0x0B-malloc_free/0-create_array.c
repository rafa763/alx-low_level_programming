#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - create an initialize it to char
 *
 * @size: size to be allocated
 * @c: char to initialize with
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *result, *ptr;

	 ptr = malloc(sizeof(char) * size);

	if (!ptr || !size)
		return (NULL);
	result = ptr;
	while (size--)
		*ptr++ = c;
	return (result);
}
