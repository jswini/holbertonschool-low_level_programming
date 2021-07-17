#include <stdio.h>
#include "holberton.h"
/**
 * _memset - sets n bytes of memory area s to byte b
 * @s: string (array) to be set
 * @b: byte to set memory to
 * @n: number of bytes to set
 *
 * Return: finished array or string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
