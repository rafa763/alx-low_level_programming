#include "main.h"

/**
 * _strlen - return  the length of a string
 * @s: pointer to a string
 *
 * Return: number of characters (int)
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}
