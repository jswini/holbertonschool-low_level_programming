#include "holberton.h"
/**
 *_strcpy - replicates a source string into a destination string
 *@dest: destination
 *@src: source
 *
 *Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
