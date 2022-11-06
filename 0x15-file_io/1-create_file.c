#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - function that creates a file
 * 
 * @filename: name of the file to create
 * @text_context: NULL terminated string to write to the file
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, stat, count = 0;
	char *buffer;

	fd = open(filename, O_CREAT | O_RDWR);
	if (fd == -1)
		return (-1);
	buffer = malloc(sizeof(char) * count);
	if (!buffer)
	{
		free(buffer);
		return (-1);
	}
	while (text_content[count])
		count++;
	stat = write(fd, text_content, count);
	if (stat == -1)
		return (-1);
	free(buffer);
	close(fd);
	return (1);
}
