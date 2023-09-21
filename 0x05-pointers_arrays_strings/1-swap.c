#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first number to be swapped
 * @b: second number to be swapped with first
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
