#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concatenates 2 strings into a new string
 *@s1: first string
 *@s2: second string
 *
 *Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, s1len, s2len;
	char *concat;

	if (s1 != NULL)
	{
		s1len = _strlen(s1);
	}
	else
	{
		s1len = 0;
	}
	if (s2 != NULL)
	{
		s2len = _strlen(s2);
	}
	else
	{
		s2len = 0;
	}

	concat = malloc(sizeof(char) * (s1len + s2len + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < s1len; i++)
		{
			concat[i] = s1[i];
		}
		for (j = 0; j < s2len; j++)
		{
			concat[i + j] = s2[j];
		}
		concat[i + j] = '\0';
	}
	return (concat);
}

/**
 *_strlen - outputs the length of the string s
 *@s: string passed to be measured
 *
 *Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{

	}
	return (count);
}
