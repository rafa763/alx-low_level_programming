#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of integers
 *
 * @min: minimun value
 * @max: maximum value
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *str, i = 0;

	if (min > max)
		return (NULL);
	str = malloc((max - min) * sizeof(int));
	if (!str)
		return (NULL);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
