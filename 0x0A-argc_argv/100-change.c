#include <stdio.h>
#include <stdlib.h>
/**
 * compute - calculate no of coins
 *
 * @money: coins paid by user
 *
 * Return: Int
 */
int compute(int money)
{
	int change = 0, i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	while (money > 0)
	{
		if (coins[i] <= money)
		{
		money -= coins[i];
		change++;
		}
		else
			i++;

	}
	return (change);
}
/**
 * main - print minimun number of coins
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Int
 */
int main(int argc, char *argv[])
{
	int money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] < 0)
	{
		printf("0\n");
		return (2);
	}
	money = atoi(argv[1]);

	printf("%d\n", compute(money));
	return (0);
}
