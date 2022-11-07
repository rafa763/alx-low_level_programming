#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - append text to a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, stat, count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		if (fd == 0)
			return (1);
		else
			return (-1);
	}
	while (text_content[count])
		count++;
	stat = write(fd, text_content, count);
	if (stat == -1)
		return (-1);
	close(fd);
	return (1);
}
