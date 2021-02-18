#include "holberton.h"
int _strlen(char *s);
/**
 *puts_half - outputs the 2nd half of the string passed to the function
 *@str: string passed to the function
 *
 *Return: void
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	if ((len % 2) != 0)
	{
		for (i = ((len + 1) / 2); i <= len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len / 2); i <= len; i++)
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
