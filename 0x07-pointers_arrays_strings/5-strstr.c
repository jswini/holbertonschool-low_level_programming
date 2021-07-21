#include <stdio.h>
#include "holberton.h"

/**
 * _strstr - finds the first occurance of needle in haystack
 * @haystack: source string
 * @needle: search term
 *
 * Return: pointer to location of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	char *loc;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			for (loc = &haystack[i]; loc[j] == needle[j]; j++)
			{
				if (loc[j] != needle[j])
					break;
			}
			return (&haystack[i]);
		}
	}
	return (NULL);
}
