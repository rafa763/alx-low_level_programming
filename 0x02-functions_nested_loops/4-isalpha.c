#include "main.h"

/**
 * _isalpha - Entry point
 *
 * description: function that checks if character is alphabetical
 * @c: the character to be checked
 *
 * Return: 1 if alphabetical, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
