#include "holberton.h"
/**
 *_puts_recursion - prints a string 1 char at time then newline
 *@s: string to print
 *
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
