#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main - copy content from file to file
 *
 * @argc: argument count
 * @argv: array of argument vectors
 *
 * Return: Int
 */
int main(int argc, char **argv)
{
	int fd1, fd2, stat1 = 1, stat2, c1, c2;
	char *buffer;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (!(access(argv[1], F_OK) == 0))
		exit(98);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	while (stat1 > 0)
	{
		stat1 = read(fd1, buffer, 1024);
		if (stat1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		stat2 = write(fd2, buffer, stat1);
		if (stat2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	c1 = close(fd1);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1);
		exit(100);
	}
	c2 = close(fd2);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2);
		exit(100);
	}
	exit(0);
}
