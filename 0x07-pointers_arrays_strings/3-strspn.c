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
	char *p = accept;
	unsigned int i = 0, brk = 0;

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				i++;
		}

		brk++;
		accept = p;
		
		if (i != brk)
			break;
	}

	return (i);
}	
