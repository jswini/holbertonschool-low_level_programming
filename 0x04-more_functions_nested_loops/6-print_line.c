#include <stdio.h>
#include "holberton.h"
/**
 * print_line - outputs an underscore the number of times input
 * @n: input
 *
 * Return: void
 */
void print_line(int n)
{
	int count;

	for (count = 1; count < n; count++)
		_putchar('_');
	_putchar('\n');
}
