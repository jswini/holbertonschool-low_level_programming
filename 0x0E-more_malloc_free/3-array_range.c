#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - creates an array of ints
 * @min: lowest value
 * @maxL highest value
 *
 * Return: pointer to the array if success, null if failed
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = i + min;
	return (array);
}
