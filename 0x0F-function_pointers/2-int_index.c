#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: pointer to the array to be searched
 * @size: size of @array
 * @cmp: pointer to the function to be used
 *
 * Return: index of the element matching, else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
