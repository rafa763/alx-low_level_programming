#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if letter is uppercase
 *
 * @c: character to be checked
 *
 * Return: int 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
