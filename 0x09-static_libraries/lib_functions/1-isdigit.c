#include "main.h"

/**
 * _isdigit - Entry point
 *
 * description: check for a digit.
 * @c: digit to be checked
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
