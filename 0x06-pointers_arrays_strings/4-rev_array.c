#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the first element
 * @n: the number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	i = 0;
	while (i < n / 2)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n  - i - 1) = tmp;
		i++;
	}
}
