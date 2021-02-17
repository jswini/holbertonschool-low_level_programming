#include "holberton.h"
int _strlen(char *s);
/**
 *puts2 - outputs every other character in a string passed to the function
 *@str: string passed to the function
 *
 *Return: void
 */

void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 *_strlen - outputs the length of the string s
 *@s: string passed to be measured
 *
 *Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{

	}
	return (count);
}
