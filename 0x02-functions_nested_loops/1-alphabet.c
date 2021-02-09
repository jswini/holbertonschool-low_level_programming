#include "holberton.h"
/*
 *print_alphabet - outputs the lower case letters
 *
 *Return: 0
*/
void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		_putchar(ltr);
	}
	_putchar('\n');
}
