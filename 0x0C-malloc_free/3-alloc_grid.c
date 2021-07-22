#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - allocates and initializes a 2d array
 * @width: number of colums
 * @height: number of rows
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
