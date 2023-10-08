#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the passsed string
 * @c: character to be searched
 *
 * Return: pointer to char if found, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;

	return (*s == c ? s : NULL);
}
