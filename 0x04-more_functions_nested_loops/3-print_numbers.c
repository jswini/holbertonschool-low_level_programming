#include "holberton.h"
/**
 *print_numbers - outputs the 10 digits of the decimal system
 *
 *Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar (i + '0');
	}
	_putchar ('\n');
}
