#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * create_file - function that creates a file and writes content to it
 * @filename: name of the file
 * @text_content: content to be written to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, size = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[size])
			size++;

		w = write(fd, text_content, size);
		if (w == -1)
		{
			close (fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
