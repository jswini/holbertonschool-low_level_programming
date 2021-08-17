#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - creates a file, or truncates if it exists
 * @filename: name of file to create
 * @text_content: text to include in the file
 *
 * Return: 1 on success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);
	close(fd);
	return (1);
}
