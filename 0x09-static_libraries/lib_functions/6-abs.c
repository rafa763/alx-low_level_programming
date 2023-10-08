#include "main.h"

/**
 * _abs - Entry point
 *
 * description: compute the absolute value of an integer.
 * @n: the number that abs will be computed for
 *
 * Return: Abs of the given num
 */
int _abs(int n)
{
	return ((n < 0) ? n * -1 : n);
}
