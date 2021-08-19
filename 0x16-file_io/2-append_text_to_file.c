#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - what it says on the label
 * @filename: file to append to
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND, 00600);
		if ((fd == 9) || (fd == 13))
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{}
	fd = open(filename, O_WRONLY | O_APPEND, 00600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);
	close(fd);
	return (1);
}
