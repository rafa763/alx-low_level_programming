#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of the element
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *pp;
	unsigned int total;

	if (!nmemb || !size)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);

	if (!ptr)
		return (NULL);

	pp = ptr;
	while (total--)
		*pp++ = 0;

	return (ptr);
}
