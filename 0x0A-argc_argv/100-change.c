#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Int (minimum number of coins)
 */
int main(int argc, char *argv[])
{
	int cents, t = 0, i = 0;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents >= 1)
	{
		if (cents >= change[i])
		{
			cents -= change[i];
			t++;
		}
		else
		{
			i++;
		}
	}

	printf("%d\n", t);
	return (0);
}
