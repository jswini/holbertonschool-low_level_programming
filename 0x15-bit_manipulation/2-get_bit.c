#include "holberton.h"
/**
 * get_bit - finds a bit at a given index
 * @n: number to check
 * @index: index to find
 *
 * Return: value of bit found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, value;

	for (i = 0; i <= index; i++)
	{
		if (i == index)
			value = (n & 1);
		n >>= 1;
	}
	return (value);
}
