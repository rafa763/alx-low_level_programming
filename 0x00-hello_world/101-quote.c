#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print a string to the standard error
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", s);
	return (1);
}
