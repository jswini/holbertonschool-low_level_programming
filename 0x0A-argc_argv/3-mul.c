#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the multiplication of 2 numbers
 *@argc: number of arguements passed
 *@argv: array of arguments passed
 *
 *Return: 0 if successful, 1 if incorrect number of args
 */
int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
