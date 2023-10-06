#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the passed string
 * @accept: pointer to the substring
 *
 * Return: Int (the number of bytes in the initial
 * segment of s which consist only of bytes from accept)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int chars[256] = {0};

	while (*accept)
	{
		chars[(int)*accept] = 1;
		accept++;
	}

	while (*s && chars[(int)*s])
	{
		count++;
		s++;
	}

	return (count);
}
