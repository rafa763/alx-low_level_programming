#include <stdio.h>
/**
 * main - print all received arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Int (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
