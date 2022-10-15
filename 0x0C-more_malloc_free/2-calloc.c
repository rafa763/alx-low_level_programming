#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for array and initialize it to zero
 *
 * @nmemb: number of elements
 * size: number of bytes
 *
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (*ptr)
		*ptr++ = 0;
	return (ptr);
}
