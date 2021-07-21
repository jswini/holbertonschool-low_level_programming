#include <stdio.h>
/**
 * main - outputs expansion of macro for file name
 *
 * Return: 0
 */
int main(void)
{
	char *file = __FILE__;

	printf("%s\n", file);
	return (0);
}
