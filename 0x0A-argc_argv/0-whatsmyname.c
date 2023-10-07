#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: agrument count of main function
 * @argv: argument vertor
 *
 * Return: Int (Always 0)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

