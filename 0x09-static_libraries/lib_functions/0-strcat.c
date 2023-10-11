#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: the original string
 * @src: what to be appended to dest
 *
 * Return: the total string (original + appended)
 */
char *_strcat(char *dest, char *src)
{
	char *start;

	start = dest;

	while (*dest)
		dest++;

	while ((*dest++ = *src++))
		;

	return (start);

}