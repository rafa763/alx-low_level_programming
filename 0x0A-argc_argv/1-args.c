#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: agrument count of main function
 * @argv: argument vertor
 *
 * Return: Int (Always 0)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

