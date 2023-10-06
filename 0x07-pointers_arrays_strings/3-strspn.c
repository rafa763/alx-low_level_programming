#include "main.h"

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
	char *p = accept;
	unsigned int i = 0;

	for (; *accept != '\0'; accept++)
	{
		for (; *s != '\0'; s++)
		{
			if (*s == *accept)
				i++;
		}
		s = p;
	}

	return (i);
}	
