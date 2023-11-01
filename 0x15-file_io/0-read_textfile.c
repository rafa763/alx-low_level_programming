#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file
* @letters: number of letters to be printed
*
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(letters);

	if (!buff)
		return (0);

	r = read(fd, buff, letters);

	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r);

	if (w == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (w);
}
