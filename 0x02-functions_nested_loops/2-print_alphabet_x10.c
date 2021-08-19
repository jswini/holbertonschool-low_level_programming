#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - outputs the alphabet 10 times using _putchar
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int counter;
	char character;

	for (counter = 0; counter < 10; counter++)
	{
		for (character = 97; character <= 122; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
