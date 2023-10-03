#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed
 *
 * Return: Void
 */
void rev_string(char *s)
{
	char *end = s;

	while (*end)
		end++;

	end--;

	while (s < end)
	{

		char tmp;

		tmp = *s;
		*s = *end;
		*end = tmp;

		s++;
		end--;
	}
}
