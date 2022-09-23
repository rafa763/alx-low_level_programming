#include "main.h"
/**
 * *cap_string - capitalize all words of a string
 *
 * @c: string to be converted to capped
 *
 * Return: Char
 */
char *cap_string(char *c)
{
	int i, j;
	char ex[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};
	c[0] -= 32;
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; ex[j] != '\0'; j++)
		{
			if (c[i] == ex[j])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122 && c[i + 1] != '\0')
					c[i + 1] -= 32;
			}
		}
	}
	return (c);
}
