#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - read text file and print it to the standard output
 *
 * @filename: name of the file to be read
 * @letters: number of letters to read and printed
 *
 * Return: ssize_t (number of letters it could read and print)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, words, count;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	count = read(fd, buffer, letters);
	words = write(STDOUT_FILENO, buffer, count);
	free(buffer);
	close(fd);
	return (words);
}
