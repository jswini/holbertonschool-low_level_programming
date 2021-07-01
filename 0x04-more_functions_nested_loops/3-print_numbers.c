#include <stdio.h>
#include "holberton.h"
/**
 * print_numbers - outputs numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
		_putchar(number + '0');
	_putchar('\n');
}
