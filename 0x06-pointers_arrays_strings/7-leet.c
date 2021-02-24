#include "holberton.h"
/**
 *leet - subs leet char for letters
 *@array: array to be changed
 *
 *Return: character array
 */

char *leet(char *array)
{
	char alpha[] = "aeotlAEOTL";
	char nums[] = "4307143071";
	int n, x;

	if (*array == '\0')
		return (array);
	for (n = 0; array[n] != '\0'; n++)
	{
		for (x = 0; alpha[x] != '\0'; x++)
		{
			if (array[n] == alpha[x])
				array[n] = nums[x];
		}
	}
	return (array);
}
