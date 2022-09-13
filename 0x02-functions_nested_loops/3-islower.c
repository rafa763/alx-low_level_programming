#include "main.h"
#include <ctype.h>
/**
 * _islower - entry point
 *
 * description: 'check if c is lowercase character'
 *
 * Return: int 1 if lowercase else 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
