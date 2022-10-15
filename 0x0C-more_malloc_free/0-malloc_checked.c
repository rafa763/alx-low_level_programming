#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: amount of memory to be malloced
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit (98);
	return (ptr);
}
