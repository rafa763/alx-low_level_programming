#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
