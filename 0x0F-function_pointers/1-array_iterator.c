#include "function_pointers.h"
/**
 * array_iterator - print array elemnts in specific format
 *
 * @array: pointer to first element in array
 * @size: length of the array
 * @action: pointer to the print function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (*action && *array)
			action(*array++);
	}
}
