#include "holberton.h"
/**
 *print_line - outputs a line n times
 *@n: amount of times to output
 *
 *Return: Void
 */
void print_line(int n)
{
	int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar ('\n');
}
