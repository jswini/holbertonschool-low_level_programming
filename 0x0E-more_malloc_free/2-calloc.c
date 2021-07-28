#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocates memory for # of members of size size
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	size_t bytes;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	bytes = nmemb * size;
	pointer = malloc(bytes);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < bytes; i++)
	{
		*pointer = '0';
	}
	return (pointer);
}
