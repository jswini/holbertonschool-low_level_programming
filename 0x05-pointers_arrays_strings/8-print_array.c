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
	{
		if (n > 0)
		{
			for (i = 0; i < n; i++)
			{
				printf("%d, ", *(a + (i - 1)));
			}
			printf("%d", *(a + (i - 1)));
		}
	}
	printf("\n");
}
