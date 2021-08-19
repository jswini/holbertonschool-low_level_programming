#include "holberton.h"
#include <string.h>
/**
 * display_error - outputs the error requested
 * @error_number: code to use for error
 *
 * Return: error number
 */
int display_error(int error_number)
{
	char *error97 = "Usage: cp file_from file_to\n";
	char *error98 = "Error: Can't read from file NAME_OF_THE_FILE\n";
	char *error99 = "Error: Can't write to NAME_OF_THE_FILE\n";
	char *error100 = "Error: Can't close fd FD_VALUE\n";
	char *noerror = "No Error\n";

	switch (error_number)
	{
	case 97:
	{
		dprintf(STDERR_FILENO, error97, strlen(error97));
		break;
	}
	case 98:
	{
		dprintf(STDERR_FILENO, error98, strlen(error98));
		break;
	}
	case 99:
	{
		dprintf(STDERR_FILENO, error99, strlen(error99));
		break;
	}
	case 100:
	{
		dprintf(STDERR_FILENO, error100, strlen(error100));
		break;
	}
	default:
	{
		dprintf(STDERR_FILENO, noerror, strlen(noerror));
		break;
	}
	}
	return (error_number);
}

/**
 * main - copies a file from source to dest
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 if success 97, 98, 99, or 100 if failed
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, count, write_test;
	char *buffer;

	if (argc != 3)
	{
		display_error(97);
		exit(97);
	}
	if (!argv[1])
	{
		display_error(98);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((count = read(fd_from, buffer, 1024)) && count > 0 &&
	       write_test >= 0)
	{
	if (fd_to == -1)
	{
		display_error(99);
		exit(99);
	}
	write_test = write(fd_to, buffer, count);
	}
	if (write_test <= 0)
	{
		display_error(99);
		exit(99);
	}
	free(buffer);
	if ((close(fd_from) < 0) || (close(fd_to) < 0))
	{
		display_error(100);
			exit(100);
	}
	return (0);
}
