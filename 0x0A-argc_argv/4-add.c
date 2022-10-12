#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - add postive numbers;
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Int
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
