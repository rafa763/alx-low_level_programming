#include "main.h"

/**
 * _strlen - return  the length of a string
 * @s: pointer to a string
 *
 * Return: number of characters (int)
 */
int _strlen(char *s)
{
	const char *str = s;

	while (*str)
		++str;

	return (str - s);
}
