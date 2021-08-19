#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints the sum of the diagonals in a square 2d array
 * @a: array to sum
 * @size: size of both dimensions
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sumlr = 0;
	int sumrl = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumlr += *((a) + (i * size) + j);
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j + 1 == size)
				sumrl += *((a) + (i * size) + j);
		}
	}
	printf("%d, %d\n", sumlr, sumrl);
}
