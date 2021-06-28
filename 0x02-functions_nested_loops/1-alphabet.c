#include <stdio.h>
#include "holberton.h"
/**
 *print_alphabet - outputs the alphabet lower case using _putchar
 *
 *Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
