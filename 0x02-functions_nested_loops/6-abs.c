#include "main.h"
#include <stdlib.h>
/**
 * _abs - return the absolute value of a given number
 *
 * @n: int to be processed
 *
 * Return: abs of n
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
