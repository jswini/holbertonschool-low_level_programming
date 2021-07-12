#include <stdio.h>
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
 * _strcat - concatenates 2 strings
 * @dest: destination
 * @src: source - to be appended to destination
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = _strlen(dest);
	int src_length = _strlen(src);
	int i;

	for (i = 0; i < src_length; i++)
	{
		dest[i + dest_length] = src[i];
	}
	return (dest);
}
