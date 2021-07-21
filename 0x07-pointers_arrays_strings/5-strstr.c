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
	int i, j;
	char *loc;

	if (needle == NULL)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			for (loc = &haystack[i]; loc[j] == needle[j]; j++)
			{
				if (needle[j + 1] == '\0')
					return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
