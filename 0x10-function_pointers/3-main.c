#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - calculates 2 ints
 * @argc: number of args
 * @argv: array of arguments
 *
 * Return: 0 if success, other if failed
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (((*argv[2] == '/') || (*argv[2] == '%')) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2]);
	printf("%d\n", result(num1, num2));
	return (0);
}
