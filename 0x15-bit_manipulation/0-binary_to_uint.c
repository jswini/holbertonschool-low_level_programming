#include "holberton.h"
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: binary number to convert
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int  i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
	}
	i = 0;
	while ((b[i] == '0') || (b[i] == '1'))
	{
		sum <<= 1;
		sum += b[i] - '0';
		i++;
	}
	return (sum);
}
