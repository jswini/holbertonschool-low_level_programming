#include "holberton.h"
/**
 *print_triangle - outputs a triangle made of hashmarks
 *@size: number of rows and columns of output
 *
 *Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
				_putchar(' ');
			for (k = 1 ; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
