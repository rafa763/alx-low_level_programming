#include "main.h"
/**
 * rev_string - print a string in reverse
 *
 * @s: passed string
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int i, l, e = 0;
	char tmp;

	while (s[e] != '\0')
		e++;

	l = e - 1;
	for (i = 0; i < l / 2; i++)
	{
		e--;
		tmp = s[i];
		s[i] = s[e];
		s[e] = tmp;
	}
}
