#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - allocates and initiallizes an array of size specified
 * @size: size of array
 * @c: char to initialize in each index
 *
 * Return: NULL if fails or size is 0, or a pointer to the array if success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size != 0)
	{
		array = malloc(sizeof(char) * size);
		if (array == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			array[i] = c;
		return (array);
	}
	return (NULL);
}
