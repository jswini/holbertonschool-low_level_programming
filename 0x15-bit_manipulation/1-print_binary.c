#include "holberton.h"
/**
 * numdigits - checks number of binary digits in a number
 * @n: number to check
 *
 * Return: number of binary digits
 */
int numdigits(unsigned long int n)
{
	int count;

	for (count = 0; n > 0; count++)
		n /= 2;
	return (count);
}
/**
 * print_binary - outputs the binary of a decimal input
 * @n: decimal to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, digit;
	int size;

	size = numdigits(n);
	if (size == 0)
	{
		_putchar(0 + '0');
		return;
	}
	for (i = 1 << (size - 1); i > 0; i >>= 1)
	{
		if (n & i)
			digit = 1;
		else
			digit = 0;
		_putchar(digit + '0');
	}
}
