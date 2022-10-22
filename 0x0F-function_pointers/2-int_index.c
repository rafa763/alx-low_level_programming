#include "function_pointers.h"
/**
 * int_index - search for an integer
 *
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array && *cmp)
		{
			if (cmp(*array++) != 0)
				return (i);
		}
	}
	return (-1);
}
