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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
