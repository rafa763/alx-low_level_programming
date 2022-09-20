#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - print a string in reverse
 *
 * @s: passed string
 *
 * Return: Void
 */
void rev_string(char *s)
{
	unsigned long int i, q;
	char temp;

	for (i = 0, q = strlen(s); i < strlen(s) / 2; i++, q--)
	{
		temp = s[i];
		s[i] = s[q - 1];
		s[q - 1] = temp;
	}
}
