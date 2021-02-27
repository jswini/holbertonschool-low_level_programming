#include "holberton.h"
/**
 *_memcpy - copies n bytes from src location to dest location
 *@dest: new location
 *@src: original location
 *@n: number of bytes to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
