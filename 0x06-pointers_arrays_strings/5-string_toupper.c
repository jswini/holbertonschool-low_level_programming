#include "holberton.h"
/**
 *string_toupper - changes each element in a string to upper case
 *@array: string to be changed
 *
 *Return: updated string
 */

char *string_toupper(char *array)
{
	int i;

	for (i = 0; array[i] != '\0'; i++)
	{
		if (array[i] > 96 && array[i] < 123)
		{
			array[i] = array[i] - 32;
		}
	}
	return (array);
}
