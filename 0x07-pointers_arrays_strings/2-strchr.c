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
	while (*s != c)
	{
		if (*s == '\0')
		{
			return ('\0');
		}
		s++;
	}
	return (s);
}
