#include <stdio.h>
#include "holberton.h"
/**
 * cap_string - capitalizes the first letter of each word in the string
 * @str: string to cap
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char delimiter[] = {' ', '\t', '\n', ',', ';', '.', '!', '\?', '\"',
			    '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; delimiter[j] != '\0'; j++)
		{
			if (str[i] == delimiter[j])
			{
				if ((str[i + 1] >=97) && (str[i + 1] <= 122))
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
