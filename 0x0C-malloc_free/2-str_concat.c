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
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string if success, null if failed
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	dest = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		dest[i] = s1[i];
	for (i = len1; i < (len1 + len2); i++)
		dest[i] = s2[i - len1];
	dest[len1 + len2] = '\0';
	return (dest);
}
