#include "search_algos.h"
/**
 * binary_search - searches a sorted array by cutting in half each iteration
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of searched value
 */
int binary_search(int *array, size_t size, int value)
{
	int first;
	int middle;
	int end;

	first = 0;
	end = size - 1;
	while (first <= end)
	{
		middle = (first + end)/2;
		printf("Searching in array: ");
		print_array(&array[first], ((end - first) + 1));
		printf("\n");
		if (array[middle] < value)
		{
			first = middle + 1;
		}
		else if (array[middle] > value)
		{
			end = middle - 1;
		}
		else
		{
			return(middle);
		}
	}
	return (-1);
}

/**
 * print_array - outputs the contents of an array of ints
 * @a: array to output
 * @n: number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", *(a + i));
		printf("%d", *(a + i));
	}
	printf("\n");
}
