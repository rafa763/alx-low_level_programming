#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the passed integer
 * @index: index of the bit to be set to 1
 *
 * Return: altered int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(long int) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
