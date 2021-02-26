#include "holberton.h"
/**
 *_memset - changes value at a memory address
 *@s: array passed in
 *@b: new value
 *@n: number of elements to change
 *
 *Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
