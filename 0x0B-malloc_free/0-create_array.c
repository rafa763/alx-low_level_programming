#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: the size of the array to be created
 * @c: char that array will be initialized with
 *
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));
	char *start = p;

	if (!p || !size)
		return (NULL);

	while (size--)
		*p++ = c;

	return (start);
}
