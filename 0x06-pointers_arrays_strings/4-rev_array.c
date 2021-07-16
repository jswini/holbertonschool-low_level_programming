#include <stdio.h>
#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: length of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int limit = n / 2;

	n -= 1;
	for (i = 0; i < limit; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
