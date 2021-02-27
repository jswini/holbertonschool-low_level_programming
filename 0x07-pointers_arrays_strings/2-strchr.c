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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
