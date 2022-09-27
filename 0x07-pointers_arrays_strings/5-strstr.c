#include "main.h"
#include <string.h>
/**
 * *_strstr - locate a substring
 *
 * @haystack: searched string
 * @needle: the string
 *
 * Return: str
 */
char *_strstr(char *haystack, char *needle)
{
	char *str;

	str = strstr(haystack, needle);
	return (str);
}
