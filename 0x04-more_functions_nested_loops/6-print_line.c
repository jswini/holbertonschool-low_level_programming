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

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
