#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array to be created
 * @c: what tha array will be initialized with
 *
 * Return: pointer to the created array (char)
 */
char *create_array(unsigned int size, char c)
{
	char *p, *s;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (!p)
		return (NULL);

	s = p;
	while (size--)
		*p++ = c;

	return (s);
}
