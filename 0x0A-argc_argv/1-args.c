#include "holberton.h"
#include <stdio.h>
/**
 *main - prints number of arguments passed
 *@argc: number of arguments
 *@argv: list of arguments passed
 *
 *Return: 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
