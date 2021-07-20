#include <stdio.h>
#include "holberton.h"
/**
 * _strpbrk - returns rest of string after first occurance of a char in tester
 * @s: source string
 * @accept: test string
 *
 * Return: pointer to string position where char is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
