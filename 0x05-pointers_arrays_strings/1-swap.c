#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to first int to be swapped
 * @b: pointer to second int to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
