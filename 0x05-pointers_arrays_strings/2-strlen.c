#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @s: char to be counted
 *
 * Return: Int (str length)
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
