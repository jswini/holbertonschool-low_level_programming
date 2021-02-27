#include "holberton.h"
/**
 *_strchr - checks for a value in a string and returns the rest of the string
 *@s: string to search
 *@c: character to look for
 *
 *Return: remainder of the string, or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (*s == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
