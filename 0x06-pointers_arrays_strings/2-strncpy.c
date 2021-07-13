#include <stdio.h>
#include "holberton.h"
/**
 * _strncpy - copies n bytes of a string
 * @dest: destination
 * @src: sourc
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
