#include "main.h"
/**
 * *_strchr - locates a character in a string
 *
 * @s: string
 * @c: char to be found
 *
 * Return: *s
 */
char *_strchr(char *s, char c)
{

	while (*s + 1)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
