#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - frees a malloc'ed array
 * @grid: array to free
 * @height: number of rows in grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
