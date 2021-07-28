#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - adds numbers
 * @argc: number of args
 * @argv: list of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int num1;
	int sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 48) && (*argv[i] <= 57))
			{
				num1 = atoi(argv[i]);
				sum += num1;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
