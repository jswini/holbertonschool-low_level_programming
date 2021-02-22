#include "holberton.h"
/**
 *reverse_array - outputs array in reverse order of input
 *@a: array input
 *@n: size of array that is input
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
