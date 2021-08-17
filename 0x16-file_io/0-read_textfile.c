#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - reads a file and outputs to standard output
 * @filename: name of the file to be read
 * @letters: number of letters that should be read and print
 *
 * Return: number of letters read and printed if success, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int write_test;
	int count;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		count = 0;
		return (count);
	}
	count = read(fd, buffer, letters);
	write_test = write(STDOUT_FILENO, buffer, count);
	if (write_test == -1)
	{
		count = 0;
		return (count);
	}
	free(buffer);
	close(fd);
	return (count);
}
