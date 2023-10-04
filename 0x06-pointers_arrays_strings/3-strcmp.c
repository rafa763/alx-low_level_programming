#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string to be comapred
 * @s2: second string to be comapred
 *
 * Return: 0 is same, +ve or -ve is not similar
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return ((int) *s1 - *s2);
		s1++;
		s2++;
	}

	return (0);
}
