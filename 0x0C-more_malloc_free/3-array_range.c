#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum array value
 * @max: maximum array value
 *
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int *a, *ptr;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));

	if (!a)
		return (NULL);

	ptr = a;
	while (min <= max)
		*a++ = min++;

	return (ptr);
}
