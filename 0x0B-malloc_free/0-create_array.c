#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - creates an array
 *@size: size of the array
 *@c: char to initialize the array
 *
 *Return: NULL if size is - or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *test;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		test = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			test[i] = c;
		}
	}
	return (test);
}
