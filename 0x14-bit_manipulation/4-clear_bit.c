#include "main.h"
/**
 * clear_bit - set a bit to zero at a given index
 *
 * @n: pointer to the int
 * @index: index of the bit to be altered
 *
 * Return: Int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
