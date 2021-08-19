#include <stdio.h>
#include "holberton.h"
/**
 * swap_int - switches 2 var names for integer values
 * @a: first var
 * @b: second var
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
