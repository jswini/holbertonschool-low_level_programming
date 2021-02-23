#include "holberton.h"
/**
 *cap_string - capitalizes every word in a string input
 *@array: input string
 *
 *Return: updated character array
 */

char *cap_string(char *array)
{
	int i, j;
	char tests[] = {32, 9, 13, 44, 59, 46, 33, 34, 63, 40, 41, 123, 125};

	for (i = 0; array[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (array[0] > 96 && array[0] < 123)
				array[0] = array[0] - 32;
			if (array[i] == tests[j])
			{
				if (array[i + 1] > 96 && array[i + 1] < 123)
					array[i + 1] = array[i + 1] - 32;
			}
		}
	}
	return (array);
}
