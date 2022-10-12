#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Int
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) != 0)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
