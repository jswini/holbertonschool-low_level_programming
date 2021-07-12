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
 * _strncat - concatenates n bytes of source to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = _strlen(dest);
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i + dest_length] = src[i];
		else
		{
			dest[i + dest_length] = '\0';
			break;
		}
	}
	return (dest);
}
