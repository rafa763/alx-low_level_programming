#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check is letter is alphabetical
 *
 * @c: char to be checked
 *
 * Return: int 1 if alpha else 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
