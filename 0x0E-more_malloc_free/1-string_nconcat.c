#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - determines how long a string is
 * @s: the input string to measure
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{}
	return (count);
}

/**
 * string_nconcat - puts n chars of the 2nd string to the end of the 1st
 * @s1: first string
 * @s2: second string
 * @n: number of chars to concat
 *
 * Return: new location, or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	result = malloc((sizeof(char) * len1 * n) + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	if (len2 > n)
	{
		for (j = 0; j < n; j++)
		{
			result[i + j] = s2[j];
		}
		result[i + j + 1] = '\0';
	}
	else
		for (j = 0; j <= len2; j++)
			result[i + j] = s2[j];
	return (result);
}
