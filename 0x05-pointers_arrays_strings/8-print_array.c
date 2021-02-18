#include "holberton.h"
#include <stdio.h>
/**
 *print_array - outputs n elements of the array
 *@a: array passed in
 *@n: number of elements to print
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + (n - 1)));
}
