#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * description: print all natural numbers from n to 98, followed by a new line.
 * @n: number to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
}

