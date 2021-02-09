#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char ltr;
	int i = 0;

	while (i < 11)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
		{
			_putchar(ltr);
		}
		_putchar('\n');
		i++;
	}
}
