#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - print sum of two diagonals
 *
 * @a: array
 * @size: size of the array
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += *(a + i);
		d2 += *(a + size - i - 1);
		a += size;
	}
	printf("%d, %d\n", d1, d2);
}
