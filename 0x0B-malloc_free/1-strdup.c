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

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = _strlen(str);
		array = malloc(sizeof(char) * (len + 1));
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len; i++)
		{
			array[i] = str[i];
		}
	}
	return (array);
}
