#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

#define BUFF_SIZE 1024
/**
 * main - program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if all is ok
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, r, w, c;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}

	while ((r = read(fd1, buff, sizeof(buff))) > 0)
	{
		w = write(fd2, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	c = close(fd1)
	if (c == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s",
				(c == -1) ? argv[1] : argv[2]);
		exit(100);
	}
	exit(0);
}
