#include "holberton.h"
/**
 *swap_int - swaps 2 integers
 *@a: first int
 *@b: second int
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
