#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - outputs the last digit of an integer input
 * @number: integer input
 *
 *Return: value of last digit
 */
int print_last_digit(int number)
{
	int value;

	value = number % 10;
	if (value < 0)
	{
		value *= (-1);
	}
	_putchar(value + '0');
	return (value);
}
