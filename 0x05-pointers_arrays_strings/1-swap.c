#include "main.h"
/**
 * swap_int - swap the value of two integers
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
