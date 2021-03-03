#include "holberton.h"
#include <stdlib.h>
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
/**
 *_strdup - duplicates a string
 *@str: string to be duplicated
 *
 *Return: NULL if fails, pointer for str if success
 */
char *_strdup(char *str)
{
	int i, len;
	char *array;

	len = _strlen(str);
	if (len == 0)
	{
		return (NULL);

	}
	else
	{
		array = malloc(sizeof(char) * len);
		for (i = 0; i < len; i++)
		{
			array[i] = str[i];
		}
	}
	return (array);
}
