#include <stdio.h>
#include "holberton.h"
/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
