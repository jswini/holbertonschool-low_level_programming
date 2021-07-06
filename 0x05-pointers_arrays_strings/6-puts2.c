#include <stdio.h>
#include "holberton.h"
/**
 * puts2 - outputs every other character of a string
 * @str: string to output
 *
 * Return: void
 */
void puts2(char *str)
{
	int count;

	for (count = 0; *(str + count) != '\0'; count++)
	{
		if (count % 2 == 0)
			_putchar(*(str + count));
	}
	_putchar('\n');
}
