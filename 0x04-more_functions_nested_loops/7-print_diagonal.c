#include <stdio.h>
#include "holberton.h"
/**
 * print_diagonal - outputs the slash character as a diagonal line
 * @n: number of times to output
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count;
	int space;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
