#include "main.h"
/**
 * _isdigit - check if character is digit
 *
 * @c: char to be checked
 *
 * Return: int 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
