#include "holberton.h"
/**
 *_strncpy - replicates a source string into a destination string
 *@dest: destination
 *@src: source
 *@n: number of characters to copy
 *
 *Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
