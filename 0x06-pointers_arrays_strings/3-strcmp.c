#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Int
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (*s1++ && *s2++)
	{
		if (*s1 > *s2)
			n++;
		else if (*s1 < *s2)
			n--;
	}
	return (n);
}
