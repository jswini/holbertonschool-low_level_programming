#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - determines how long a string is
 * @s: the input string to measure
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{}
	return (count);
}

/**
 * puts_half - prints the second half of a string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int limit;
	int count;

	{
		limit = (length + 1) / 2;
		for (count = limit; *(str + count); count++)
		{
			_putchar(*(str + count));
		}
	}
	_putchar('\n');
}
