#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: agrument count of main function
 * @argv: argument vertor
 *
 * Return: Int (Always 0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

