#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 *
 * @array: the passed array
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array || !size)
		return;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
