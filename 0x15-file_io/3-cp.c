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
	int fd1, fd2, stat1, stat2;
	char *buffer;

	if (argc < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd1 = open(argv[1], O_RDWR, 0664);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	buffer = malloc(sizeof(char) * 1024);
	while ((stat1 = read(fd1, buffer, 1024)) > 0)
	{
		if (stat1 == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		stat2 = write(fd2, buffer, 1024);
		if (stat2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	close(fd1);
	close(fd2);
	return (0);
}
