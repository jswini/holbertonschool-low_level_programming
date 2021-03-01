#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds sum of arguments if they are ints
 *@argc: number of arguments
 *@argv: array or arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
