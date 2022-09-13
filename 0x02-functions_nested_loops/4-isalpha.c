#include "main.h"
#include <ctype.h>
/**
 * _islower - entry point
 *
 * @c: char to be checked
 *
 * Return: int 1 if alpha else 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
