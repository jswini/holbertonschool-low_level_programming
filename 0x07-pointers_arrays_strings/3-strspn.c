#include <stdio.h>
#include "holberton.h"
/**
 * _strspn - finds the chars in accept until there is a char not in accept
 * @s: source string
 * @accept: chars to search for
 *
 * Return: number of chars found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				sum += 1;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (sum);
}
