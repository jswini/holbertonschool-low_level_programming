#include "search_algos.h"
/**
 * linear_search - finds target by checking each element
 *
 * @array: list of items to search
 * @size: size of list
 * @value: target of search
 *
 * Return: result of search
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
