#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array to search
 * @size: size of array
 * @cmp: compare function
 *
 * Return: 1 if success, -1 if fails to find or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
				if (cmp(array[i]))
					return (i);
		}
	}
	return (-1);
}
