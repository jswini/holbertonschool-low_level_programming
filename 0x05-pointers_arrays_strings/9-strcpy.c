#include <stdio.h>
#include "holberton.h"
/**
 * _strcpy - copies a string from a source to a new string
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
