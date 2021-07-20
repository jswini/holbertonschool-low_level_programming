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
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: NULL if fails, pointer to new string if success
 */
char *_strdup(char *str)
{
	int i;
	char *dest;
	int len;

	if (str != NULL)
	{
		len = _strlen(str);
		dest = malloc(sizeof(char) * len);
		if (dest == NULL)
			return (NULL);
		for (i = 0; i <= len; i++)
			dest[i] = str[i];
	}
	else
		return (NULL);
	return (dest);
}
