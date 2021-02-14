#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - Outputs numbers to target 98
 *@n: starting number
 *
 *Return: void
 */
void print_to_98(int n)
{
	int i;
	if (n < 98)

	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("98\n");
	}
	else
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	printf("98\n");
}
