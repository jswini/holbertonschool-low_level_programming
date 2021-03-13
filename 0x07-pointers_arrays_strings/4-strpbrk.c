#include "holberton.h"
/**
 *_strpbrk - finds the first occurance of a character in a string
 *@s: string to search
 *@accept: character(s) to find
 *
 *Return: pointer to 1st occurance or NULL if not there
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
