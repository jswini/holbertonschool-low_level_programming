#include <stdio.h>
#include "holberton.h"
/**
 * main - outputs all args
 * @argc: number of args
 * @argv: list of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
