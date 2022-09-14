#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers to 98
 *
 * @n: integer to start count from
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
