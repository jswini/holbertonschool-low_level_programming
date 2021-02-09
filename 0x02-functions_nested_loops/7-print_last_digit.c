#include "holberton.h"
/**
 *print_last_digit - displays the last digit of a number
 *@n: integer to find the last digit for
 *
 *Return: n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n*-1;
	_putchar(n + '0');
	return (n);
}
