#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for array and initialize it to zero
 *
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
