#include "main.h"
/**
 * rot13 - Rotate every char by 13 places
 *
 * @str: string to be rotated
 *
 * Return: rotated string (char)
 */
char *rot13(char *str)
{
	char *result = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = 'a' + (*str - 97 + 13) % 26;
		if (*str >= 'A' && *str <= 'Z')
			*str = 'A' + (*str - 65 + 13) % 26;
		str++;
	}
	return (result);
}
