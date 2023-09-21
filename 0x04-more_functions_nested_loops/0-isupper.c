#include "main.h"

/**
 * _isupper - Entry point
 *
 * description: check for uppercase character.
 * @c: character to be checked
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
