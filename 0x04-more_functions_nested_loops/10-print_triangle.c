#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - outputs a right justified triangle of hash
 * @size: size of input
 *
 * Return: void
 */
void print_triangle(int size)
{
	int space;
	int hash;
	int count;

	if (size > 0)
	{
		for (hash = 1;  hash <= size; hash++)
		{
			{
				for (space = (size - hash); space > 0; space--)
					_putchar(' ');
			}
			for (count = 1; count <= hash; count++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
