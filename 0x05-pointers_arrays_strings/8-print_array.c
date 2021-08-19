#include <stdio.h>
#include "holberton.h"
/**
 * print_array - outputs the contents of an array of ints
 * @a: array to output
 * @n: number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", *(a + i));
		printf("%d", *(a + i));
	}
	printf("\n");
}
