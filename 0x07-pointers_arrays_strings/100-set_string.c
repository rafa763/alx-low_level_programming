#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * set_string - set pointer to char
 *
 * @s: pointer
 * @to: string
 *
 * Return: Void
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] != '\0'; i++)
		*s = to;
}
