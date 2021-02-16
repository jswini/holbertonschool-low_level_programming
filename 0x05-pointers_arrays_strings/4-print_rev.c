#include "holberton.h"
/**
 *print_rev - outputs the reversed text of the input
 *@s: input string
 *
 *Return: void
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
		_putchar('\n');
}

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{

	}
	return (count);
}
