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
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
