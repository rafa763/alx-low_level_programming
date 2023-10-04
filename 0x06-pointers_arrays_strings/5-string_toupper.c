#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer to the string to be manipulated
 *
 * Return: pointer to the edited string
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (p);
}
