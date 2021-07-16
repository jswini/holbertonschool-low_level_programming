#include <stdio.h>
#include "holberton.h"
/**
 * _strcmp - compares strings and returns 0 if same or a number if different
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if same, pos if s1 < s2 or neg if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
