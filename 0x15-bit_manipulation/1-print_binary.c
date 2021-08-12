#include "holberton.h"
/**
 * print_binary - outputs the binary of a decimal input
 * @n: decimal to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, digit;

	for (i = 1 << 10; i > 0; i >>= 1)
	{
		if (n & i)
			digit = 1;
		else
			digit = 0;
		_putchar(digit + '0');
	}
}
