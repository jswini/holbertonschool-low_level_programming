#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 *
 * Return: first occurance of c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == 0)
		return ('\0');
	return (NULL);
}
