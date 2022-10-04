#include "main.h"
#include <ctype.h>
/**
 * _islower - entry point
 *
 * @c: char to be checked
 *
 * Return: int 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
