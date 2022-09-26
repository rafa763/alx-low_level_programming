#include "main.h"
#include <string.h>
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
	char *ch;

	ch = strchr(s, c);
	return (ch);
}
