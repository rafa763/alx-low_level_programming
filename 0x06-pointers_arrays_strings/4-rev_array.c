#include "main.h"
/**
 * reverse_array - reverse the content of array
 *
 * @a: array
 * @n: number of elements
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
