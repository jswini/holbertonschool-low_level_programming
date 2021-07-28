#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - multiplies 2 numbers
 * @argc: number of args
 * @argv: list of args
 *
 * Return: 0 if success, 1 if fail
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
