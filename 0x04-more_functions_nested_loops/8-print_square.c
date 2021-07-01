#include <stdio.h>
#include "holberton.h"
/**
 * print_square - outputs a square of the hash character
 * @size: size of square
 *
 * return: void
 */
void print_square(int size)
{
	int count;
	int numlines;

	if (size > 0)
	{
		for (numlines = 0; numlines < size; numlines++)
		{
			for (count = 0; count < size; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
