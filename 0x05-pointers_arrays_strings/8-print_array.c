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

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
