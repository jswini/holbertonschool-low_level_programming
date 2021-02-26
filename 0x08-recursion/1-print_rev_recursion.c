#include "holberton.h"
/**
 *_print_rev_recursion - reverses a string input and then outputs it
 *@s: string to reverse print
 *
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
